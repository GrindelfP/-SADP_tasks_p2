//
// Created by gregory on 4/3/23.
// Part of the solution to task 4, of the project - SADP_tasks_part2, 2023.
//

#ifndef SADP_TASKS_P2_MAIN_TASK4_HPP
#define SADP_TASKS_P2_MAIN_TASK4_HPP

#include <iostream>
#include "string.hpp"

// Function for task 4.
void testing(String string) {
}

// Main function for task 4.
// Creates a string, tests the copy constructor and the assignment operator,
// concatenates two strings using the operator+= and the operator+.
// Prints the results.
void mainTask4() {
    String string("Keir-Reyn"); // Create a string.
    std::cout << string << ". Length: " << strlen(string) << std::endl; // Print the string and its length.

    testing(string); // Test the copy constructor and the assignment operator.
    std::cout << string << ". Length: " << strlen(string) << std::endl; // Print the string and its length.

    String t("Hello, "); // Create a string.
    std::cout << string << ". Length: " << strlen(string) << std::endl; // Print the string and its length.

    char *a = new char[2] {'a', '!'}; // Create a char*.
    String ta = t + a; // Concatenate the string and the char*.
    std::cout << ta << ' ' << strlen(ta) << std::endl; // Print the result.

    char *b = new char[2] {'b', '!'}; // Create a char*.
    t += b; // Concatenate the string and the char*.
    std::cout << t << ' ' << strlen(t) << std::endl; // Print the result.
}

#endif //SADP_TASKS_P2_MAIN_TASK4_HPP
