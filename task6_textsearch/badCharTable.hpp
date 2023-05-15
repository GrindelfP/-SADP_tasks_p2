//
// Created by gregory on 5/7/23.
//

// 7&8 not completed

#ifndef SADP_TASKS_P2_BAD_CHAR_TABLE_HPP
#define SADP_TASKS_P2_BAD_CHAR_TABLE_HPP

class BadChar {
private:
    char *table;

public:
    BadChar() {
        table = new char[256];
    }

    ~BadChar() {
        delete[] table;
    }

    int operator[](unsigned char c) const {
        return table[c];
    }

    void init(const char *s) {
        *table = *s;
    }
};

#endif //SADP_TASKS_P2_BAD_CHAR_TABLE_HPP
