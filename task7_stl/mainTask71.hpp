//
// Created by Gregory Shipunov on 5/15/23.
//

#ifndef SADP_TASKS_P2_MAINTASK71_HPP
#define SADP_TASKS_P2_MAINTASK71_HPP

#include <iostream>
#include <memory>
#include "test7.hpp"

void mainTask71() {
    std::cout << "Task 7.1: STL" << std::endl;

    std::cout << "\nCreating shared_ptr" << std::endl;

    std::shared_ptr<Test7> sp (new Test7[3], std::default_delete<Test7[]>());

    for (int i = 0; i < 3; ++i) {
        std::cout << sp.get()[i].Value << std::endl;
    }

    sp.get()[0].Value = 15;
    sp.get()[1].Value = 25;
    sp.get()[2].Value = 35;

    for (int i = 0; i < 3; ++i) {
        std::cout << sp.get()[i].Value << std::endl;
    }

    std::cout << "\nCreating unique_ptr" << std::endl;

    std::unique_ptr<Test7[]> up (new Test7[3]);

    for (int i = 0; i < 3; ++i) {
        std::cout << up.get()[i].Value << std::endl;
    }

    up.get()[0].Value = 45;
    up.get()[1].Value = 55;
    up.get()[2].Value = 65;

    for (int i = 0; i < 3; ++i) {
        std::cout << up.get()[i].Value << std::endl;
    }

    std::cout << "---------------------------" << std::endl;

    up.reset(new Test7[2]);

    std::cout << "----------------------------" << std::endl;
}

#endif //SADP_TASKS_P2_MAINTASK71_HPP
