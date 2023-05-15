//
// Created by gregory on 4/3/23.
// Part of the solution to task 4, of the project - SADP_tasks_part2, 2023.
//

#ifndef SADP_TASKS_P2_STRING_HPP
#define SADP_TASKS_P2_STRING_HPP

#include <cstring>

// Class String is a wrapper for char*. It represents a string.
// It has a constructor, a copy constructor, an assignment operator, a destructor, a conversion operator to char*,
// an operator+= and an operator+, which are all necessary for the class to work properly.
class String {
    // Pointer to the container of the string.
    char *containerPointer;

public:
    // Default constructor. Creates an empty string.
    String() {
        containerPointer = new char[1]{0};
    }

    // Copy constructor. Creates a new string, which is a copy of the given string.
    String(const String &string) {
        containerPointer = new char[strlen(string.containerPointer) + 1];
        strcpy(containerPointer, string.containerPointer);
    }

    // Constructor, which creates a string from a char*.
    explicit String(const char *newStringPointer) {
        if (newStringPointer) {
            containerPointer = new char[strlen(newStringPointer) + 1];
            strcpy(containerPointer, newStringPointer);
        } else containerPointer = new char[1]{0};
    }

    // Destructor. Deletes the container of the string.
    ~String() {
        delete[]containerPointer;
    }

    // Conversion operator to char*. Returns the container of the string.
    operator const char *() const {
        return containerPointer;
    }

    // Assignment operator. Assigns the given string to the current string.
    String &operator=(const String &string) {
        if (&string != this) {
            delete[]containerPointer;
            containerPointer = new char[strlen(string.containerPointer) + 1];
            strcpy(containerPointer, string.containerPointer);
        }

        return *this;
    }

    // Operator+=. Concatenates the given string to the current string.
    String& operator+=(const char *concatenant) {
        char *bufferPointer = new char[strlen(containerPointer) + strlen(concatenant) + 1];
        char *startingPointer = containerPointer;
        char *newContainerPointer = bufferPointer;
        while (*concatenant) {
            if (*startingPointer) *bufferPointer++ = *startingPointer++;
            else *bufferPointer++ = *concatenant++;
        }

        delete[]containerPointer;
        containerPointer = new char[strlen(containerPointer) + strlen(concatenant) + 1];
        copyString(containerPointer, newContainerPointer);
        return *this;
    }

    // Operator+. Concatenates the given string to the current string and returns the result.
    String operator+(const char *concatenant) const {
        char *bufferPointer = new char[strlen(containerPointer) + strlen(concatenant) + 1];
        char *startingPointer = containerPointer;
        char *newContainerPointer = bufferPointer;
        while (*concatenant) {
            if (*startingPointer) *bufferPointer++ = *startingPointer++;
            else *bufferPointer++ = *concatenant++;
        }

        return String(newContainerPointer);
    }

    // Function, which copies the given string to the given target.
    static void copyString(char *target, const char *source) {
        while ((*target++ = *source++));
    }
};

#endif //SADP_TASKS_P2_STRING_HPP
