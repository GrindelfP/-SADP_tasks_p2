//
// SADP_part2_task2 exercises with strings
//

#include <cstring>
#include "strings.hpp"

// Function of string processing.
void stringProcessing() {
    char string[] = "Talos One, Deep Storage, ID T1DS15-2";
    std::cout << string << std::endl;
    std::cout << "Size of array: " << sizeof(string) << ". String length: " << strlen(string) << std::endl;
    char copy[32];
    copyString(string, copy);
    std::cout << "Copied line: " << copy << std::endl;
}

// Function of string copying.
void copyString(char *source, char *target) {
    for (char *pt = target, *ps = source; (*pt++ = *ps++););
}

// Function of string length calculation.
int stringLength(const char *string) {
    int length = 0;
    while (*string++) {
        length++;
        //string++;
    }

    return length;
}

// Function of string comparison.
int compareStrings(const char *first, const char *second) {
    int comparisonResult = 0;
    while (*first && *second) {
        if (*first != *second) {
            if (*first > *second) comparisonResult = 1;
            else comparisonResult = -1;
            break;
        }
        first++;
        second++;
    }

    return comparisonResult;
}
