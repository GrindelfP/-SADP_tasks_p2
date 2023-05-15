//
// Created by gregory on 4/24/23.
//

#ifndef SADP_TASKS_P2_STRING_CONTAINER_HPP
#define SADP_TASKS_P2_STRING_CONTAINER_HPP

#include <cstring>

class AString;

class StringContainer {
    char *m_pszData;
    int m_nCount;

    friend class AString;

    StringContainer() {
        m_pszData = new char[1]{0};
        m_nCount = 1;
    }

    StringContainer(const char *p) {
        m_nCount = 1;
        m_pszData = new char[strlen(p) + 1];
        strcpy(m_pszData, p);
    }

    ~StringContainer() {
        delete[]m_pszData;
    }

    // Increments the reference counter
    void AddReference() {
        m_nCount++;
    }

    // Decrements the reference counter and deletes the object if the counter reaches zero
    void Release() {
        m_nCount--;
        if (m_nCount == 0) delete this;
    }
};

#endif //SADP_TASKS_P2_STRING_CONTAINER_HPP
