//
// Created by gregory on 4/24/23.
//

#ifndef SADP_TASKS_P2_MAIN_TASK6_HPP
#define SADP_TASKS_P2_MAIN_TASK6_HPP

#include "a_string.hpp"

void mainTask6a() {
    AString a = "Hello";
    AString b = " from Keir-Reign";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    a += b;
    std::cout << "a = " << a << std::endl;

    std::cout << "a.len() = " << a.len() << std::endl;
    std::cout << "a.substring(6, 4) = " << a.substring(6, 4) << std::endl;
    std::cout << "a.substring(6, 4) = " << a.substring(6, 4) << std::endl;

    std::cout << "b.substring(150, 4) = " << b.substring(150, 4) << "." << std::endl;

    std::cout << "a.substring(6, 100) = " << a.substring(6, 100) << std::endl;

    AString c(3);
    AString d(4);
    c += d;
    std::cout << "c(3) + d(4) = " << c << std::endl;
}

#endif //SADP_TASKS_P2_MAIN_TASK6_HPP
