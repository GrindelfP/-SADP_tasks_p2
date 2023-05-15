//
// Created by gregory on 4/10/23.
//

#ifndef SADP_TASKS_P2_CHILD_HPP
#define SADP_TASKS_P2_CHILD_HPP


#include "test.hpp"

class Child: public Test {
    static int counter;
    long id;
public:
    Child() {
        id = 1 + (rand() % 200);
        counter++;
        std::cout << "Object of Child: " << id <<" is created." << " Counter of objects: " << counter << std::endl;
    }

    Child(Child &child) {
        id = 1 + (rand() % 200);
        counter++;
        std::cout << "Object of Child: " << id <<" is created by copying." << " Counter of objects: " << counter << std::endl;
    }

    ~Child() {
        counter--;
        std::cout << "Object of Child: " << id <<" is destroyed." << " Counter of objects: " << counter << std::endl;
    }
};


#endif //SADP_TASKS_P2_CHILD_HPP
