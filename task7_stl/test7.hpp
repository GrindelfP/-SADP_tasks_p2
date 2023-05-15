//
// Created by Gregory Shipunov on 5/15/23.
//

#ifndef SADP_TASKS_P2_TEST7_HPP
#define SADP_TASKS_P2_TEST7_HPP

#include <iostream>

class Test7 {
public:
    int Value;
    Test7() {
        Value = 0;
        std::cout << "Creating Test" << std::endl;
    }

    ~Test7() {
        std::cout << "Destructing test" << std::endl;
    }
};


#endif //SADP_TASKS_P2_TEST7_HPP
