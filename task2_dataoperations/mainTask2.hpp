//
// SADP_part2_task2 main file for the exercises.
//

#ifndef SADP_TASKS_P2_MAIN_TASK2_HPP
#define SADP_TASKS_P2_MAIN_TASK2_HPP

#include "pointer.hpp"
#include "arrays.hpp"
#include "strings.hpp"

// Main function for task 2.
void mainTask2() {
    std::cout << "Elementary operations with pointers: " << std::endl;
    pointerProcedures();
    pointerPositioning();

    std::cout << "Values swapping: " << std::endl;
    int a = 3, b = 4;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    std::cout << "Array rotation: " << std::endl;
    const int arrayLength = 5;
    int array1[arrayLength] = {3, 4, 5, 6, 7};
    int array2[arrayLength] = {3, 4, 5, 6, 7};
    std::cout << "Clockwise: " << std::endl;
    arrayOutput(array1, arrayLength);
    arrayRotation(array1, arrayLength);
    arrayOutput(array1, arrayLength);
    std::cout << "Anti-clockwise: " << std::endl;
    arrayOutput(array2, arrayLength);
    arrayRotation(array2, arrayLength, false);
    arrayOutput(array2, arrayLength);

    std::cout << "Elementary operations with strings: " << std::endl;
    stringProcessing();

    std::cout << "Advanced operations with strings: " << std::endl;
    char hello[] = "Hello there!";
    std::cout << stringLength(hello) << std::endl;
    char copy_hello[13];
    copyString(hello, copy_hello);
    std::cout << "Copied string: " << copy_hello << std::endl;

    std::cout << "Comparison of two strings: " << std::endl;
    char lesser[] = "ape";
    char greater[] = "base";
    std::cout << "Words are '" << lesser << "' and '" << greater << "'." << std::endl;
    std::cout << "Compare 'ape' to 'ape': " << compareStrings(lesser, lesser) << std::endl;
    std::cout << "Compare 'ape' to 'base': " << compareStrings(lesser, greater) << std::endl;
    std::cout << "Compare 'base' to 'ape': " << compareStrings(greater, lesser) << std::endl;
}

#endif //SADP_TASKS_P2_MAIN_TASK2_HPP
