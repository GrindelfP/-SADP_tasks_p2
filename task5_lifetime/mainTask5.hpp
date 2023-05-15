//
// Created by gregory on 4/10/23.
//

#ifndef SADP_TASKS_P2_MAIN_TASK5_HPP
#define SADP_TASKS_P2_MAIN_TASK5_HPP

#include "test.hpp"
#include "child.hpp"
#include "aggregate.hpp"

// Test testOuter;

void foo(Test test) {
    std::cout << "Foo is running" << std::endl;
}

void mainTask5() {
    std::cout << "Inner Test object is about to be created" << std::endl;
    Test test;
    std::cout << "Inner Test object was created" << std::endl;

    std::cout << "\nDynamical:" << std::endl;
    Test *dynamicalTest = new Test;
    delete dynamicalTest;

    std::cout << "\nFoo evokes:" << std::endl;
    foo(test);

    std::cout << "\nChild creating:" << std::endl;
    Child child;

    std::cout << "\nAggregate creating:" << std::endl;
    Aggregate aggregate;

    std::cout << "\nAggregateT<Test> creating:" << std::endl;
    AggregateT<Test> aggregateT1;

    std::cout << "\nAggregateT<Child> creating:" << std::endl;
    AggregateT<Child> aggregateT2;

    std::cout << "\nEnd of main function!" << std::endl;
}

#endif //SADP_TASKS_P2_MAIN_TASK5_HPP
