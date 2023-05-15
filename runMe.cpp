//
// Created by Grindelf P. the 20th of Feb, 2023.
// Part of the project - SADP_tasks_part2, 2023.
//

#include "task2_dataoperations/mainTask2.hpp"
#include "task3_complexnumber/mainTask3.hpp"
#include "task4_constructors/mainTask4.hpp"
#include "task5_lifetime/mainTask5.hpp"
#include "task6a_refcount/mainTask61.hpp"
#include "task7_stl/mainTask7.hpp"
#include "task6_textsearch/mainTask6.hpp"
#include "task7_stl/mainTask71.hpp"
#include "task8_textprocessing/mainTask8.hpp"
#include "task10_datacompressing/mainTask10.hpp"
#include "task11_regexes/mainTask11.hpp"

// Main function.
int main() {
    int taskNumber = 0;
    std::cin >> taskNumber;

    switch (taskNumber) {
        case 2:
            mainTask2();
            break;
        case 3:
            mainTask3();
            break;
        case 4:
            mainTask4();
            break;
        case 5:
            mainTask5();
            break;
        case 61:
            mainTask61();
            break;
        case 6:
            mainTask6();
            break;
        case 7:
            mainTask7();
            break;
        case 71:
            mainTask71();
            break;
        case 8:
            mainTask8();
            break;
        case 10:
            mainTask10();
            break;
        case 11:
            mainTask11();
            break;
        default:
            std::cout << "No such task" << std::endl;
    }

    return 0;
}
