//
// Created by gregory on 4/10/23.
//

#ifndef SADP_TASKS_P2_TEST_HPP
#define SADP_TASKS_P2_TEST_HPP

#include <iostream>

class Test {
    static int counter;
    long id;

public:
    Test() {
        id = 1 + (rand() % 200);
        counter++;
        std::cout << "Object of Test: " << id <<" is created." << " Counter of objects: " << counter << std::endl;
    }

    Test(Test &test) {
        id = 1 + (rand() % 200);
        counter++;
        std::cout << "Object of Test: " << id <<" is created by copying." << " Counter of objects: " << counter << std::endl;
    }

    ~Test() {
        counter--;
        std::cout << "Object of Test: " << id <<" is destroyed." << " Counter of objects: " << counter << std::endl;
    }
};


#endif //SADP_TASKS_P2_TEST_HPP
