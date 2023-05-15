//
// Created by gregory on 4/24/23.
// Contains the declaration of the AString class
// It is part of the task6a_refcount subproject of the SADP_tasks_p2 project
//

#ifndef SADP_TASKS_P2_A_STRING_HPP
#define SADP_TASKS_P2_A_STRING_HPP

#include <cstdlib>
#include <string>
#include "stringContainer.hpp"

class AString {
    StringContainer *container;
public:
    // Default constructor
    AString() {
        container = new StringContainer();
    }

    // Constructor from C-string
    AString(const char *pointer) {
        container = new StringContainer(pointer);
    }

    // Copy constructor
    AString(const AString &s) {
        container = s.container;
        container->AddReference();
    }

    // Explicit constructor by integer parameter
    explicit AString(int number) {
        container = new StringContainer(std::to_string(number).c_str());
    }

    // Destructor
    ~AString() {
        container->Release();
    }

    // Get string length
    size_t len() const {
        return strlen(container->m_pszData);
    }

    // Operator of assignment
    AString &operator=(const AString &s) {
        if (this != &s) {
            s.container->AddReference();
            container->Release();
            container = s.container;
        }

        return *this;
    }

    // Operator of concatenation
    AString &operator+=(const AString &s) {
        size_t length = len() + s.len();
        if (s.len() != 0) {
            auto *pstrTmp = new StringContainer;
            delete[] pstrTmp->m_pszData;

            pstrTmp->m_pszData = new char[length + 1];
            strcpy(pstrTmp->m_pszData, container->m_pszData);
            strcat(pstrTmp->m_pszData, s.container->m_pszData);

            container->Release();
            container = pstrTmp;
        }

        return *this;
    }

    // Operator of conversion to C-string
    operator const char *() const {
        return container->m_pszData;
    }

    // Returns a substring starting at the specified displacement and of the specified length
    AString substring(size_t displacement, size_t length) const {
        if (displacement + length > len()) length = len() - displacement;
        if (displacement > len()) {
            displacement = len();
            length = 0;
        }
        char *p = new char[length + 1];
        strncpy(p, container->m_pszData + displacement, length);
        p[length] = 0;
        AString result(p);
        delete[]p;

        return result;
    }

};

#endif //SADP_TASKS_P2_A_STRING_HPP
