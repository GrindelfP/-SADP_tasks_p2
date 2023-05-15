//
// SADP_part2_task2 exercises with arrays
// Created by Grindelf P. the 20th of Feb, 2023.
//

#include "arrays.hpp"

// Function for array processing.
void arrayProcessing() {
    int a[5]{1,2,3,4,5};
    for(int i : a) std::cout<< i << ' ';
    std::cout<<std::endl;

    for (int *p = a; p-a<5; ++p) std::cout << *p << ' ';
    std::cout << std::endl;
}

// Function for array rotation.
void arrayRotation(int *array, int arrayLength, bool clockwise) {
    int x; // Temporary variable for storing the value of the first or last element of the array.
    if (clockwise) { // If the rotation is clockwise.
        x = array[0]; // Save the value of the first element of the array.
        for (int *px = array, i = 0; i < arrayLength; i++, px++) *px = *(px + 1); // Shift all elements of the array to the left.
        array[arrayLength - 1] = x; // Assign the value of the first element of the array to the last element of the array.
    } else { // If the rotation is counterclockwise.
        int lastIndex = arrayLength - 1; // Index of the last element of the array.
        x = array[lastIndex]; // Save the value of the last element of the array.
        for (int *pi = &array[lastIndex], i = lastIndex; i > 0; i--, pi--) *pi = *(pi - 1); // Shift all elements of the array to the right.
        array[0] = x; //
    }
}

// Function for array output.
void arrayOutput(int array[], int arrayLength) {
    std::cout << '['; // Output the opening square bracket.
    int i; // Index of the last element of the array.
    for (i =  0; i < arrayLength - 1; ++i) { // Output all elements of the array except the last one.
        std::cout << array[i] << ", ";
    }
    std::cout << array[i] << ']' << std::endl; // Output the last element of the array and the closing square bracket.
}
