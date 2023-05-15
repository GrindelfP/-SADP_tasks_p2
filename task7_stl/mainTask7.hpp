//
// Created by gregory on 5/7/23.
//

#ifndef SADP_TASKS_P2_MAIN_TASK7_HPP
#define SADP_TASKS_P2_MAIN_TASK7_HPP

#include <map>
#include <unordered_map>
#include <iostream>
#include <random>
#include <chrono>

#define K 8
#define M 512

class Result {
public:
    Result(int n, long long mapTime, int counter) : n(n), mapTime(mapTime), counter(counter) {}
    int n;
    long long mapTime;
    int counter;
};

void insertionTest();

void searchTest();

char *generateRandomString();

void mainTask7() {
    std::cout << "Task 7: STL" << std::endl;

    // insertion test
    insertionTest();

    // search test
    searchTest();
}

void searchTest() {
    int n[] = {32, 128, 512, 2048, 4 * 2048};
    std::vector<Result> mapTimes;
    std::vector<Result> unorderedMapTimes;

    std::map<std::string, int> map;
    std::unordered_map<std::string, int> unorderedMap;

    for (int ni: n) { // ordered calculation
        auto *data = new std::pair<std::string, int>[ni];
        for (int i = 0; i < ni; ++i) {
            data[i] = {generateRandomString(), std::rand() % ni};
        }

        for (int i = 0; i < ni; ++i) {
            map.insert(data[i]);
        }

        int foundCounter = 0;

        auto start = std::chrono::steady_clock::now();
        for (int i = 0; i < M; ++i) {
            std::string key = data[i % ni].first;
            int elemNumber = map.find(key)->second;
            foundCounter += elemNumber;
        }
        auto end = std::chrono::steady_clock::now();
        mapTimes.push_back(Result(
                ni,
                std::chrono::duration_cast<std::chrono::microseconds>(end - start).count(),
                foundCounter)
                );
    }

    for (int ni: n) { // unordered calculation
        auto *data = new std::pair<std::string, int>[ni];
        for (int i = 0; i < ni; ++i) {
            data[i] = {generateRandomString(), std::rand() % ni};
        }

        for (int i = 0; i < ni; ++i) {
            unorderedMap.insert(data[i]);
        }

        int foundCounter = 0;

        auto start = std::chrono::steady_clock::now();
        for (int i = 0; i < M; ++i) {
            std::string key = data[i % ni].first;
            int elemNumber = map.find(key)->second;
            foundCounter += elemNumber;
        }
        auto end = std::chrono::steady_clock::now();
        unorderedMapTimes.push_back(Result(
                ni,
                std::chrono::duration_cast<std::chrono::microseconds>(end - start).count(),
                foundCounter)
        );
    }

    std::cout << "Map times: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << mapTimes[i].n << " " << mapTimes[i].mapTime << " " << mapTimes[i].counter << std::endl;
    }

    std::cout << "Unordered map times: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << unorderedMapTimes[i].n << " " << unorderedMapTimes[i].mapTime << " " << unorderedMapTimes[i].counter << std::endl;
    }
}

void insertionTest() {
    int n[] = {32, 128, 512, 2048, 4 * 2048};
    std::vector<long long> mapTimes;
    std::vector<long long> unorderedMapTimes;

    std::map<std::string, int> map;
    std::unordered_map<std::string, int> unorderedMap;

    for (int ni: n) { // ordered calculation
        auto *data = new std::pair<std::string, int>[ni];
        for (int i = 0; i < ni; ++i) {
            data[i] = {generateRandomString(), std::rand() % ni};
        }

        auto start = std::chrono::steady_clock::now();
        for (int i = 0; i < ni; ++i) {
            map.insert(data[i]);
        }
        auto end = std::chrono::steady_clock::now();
        mapTimes.push_back(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count());
    }

    for (int ni: n) { // unordered calculation
        auto *data = new std::pair<std::string, int>[ni];
        for (int i = 0; i < ni; ++i) {
            data[i] = {generateRandomString(), std::rand() % ni};
        }

        auto start = std::chrono::steady_clock::now();
        for (int i = 0; i < ni; ++i) {
            unorderedMap.insert(data[i]);
        }
        auto end = std::chrono::steady_clock::now();
        unorderedMapTimes.push_back(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count());
    }

    std::cout << "Map times: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << mapTimes[i] << std::endl;
    }

    std::cout << "Unordered map times: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << unorderedMapTimes[i] << std::endl;
    }
}

char *generateRandomString() {
    char *str = new char[K + 1];
    srand(time(nullptr)); // seed the random number generator
    for (int i = 0; i < K; i++) {
        str[i] = 'a' + rand() % 26; // generate a random lowercase letter
    }
    str[K] = '\0'; // add the null character
    return str;
}

#endif //SADP_TASKS_P2_MAIN_TASK7_HPP
