//
// Created by gregory on 4/10/23.
//

#ifndef SADP_TASKS_P2_AGGREGATE_HPP
#define SADP_TASKS_P2_AGGREGATE_HPP


#include "test.hpp"
#include "child.hpp"

class Aggregate {
    Test test;
    Child child;
    static int counter;

public:
    Aggregate() {
        counter++;
        std::cout << "Object of Aggregate is created. Counter of objects: " << counter << std::endl;
    }

    ~Aggregate() {
        counter--;
        std::cout << "Object of Aggregate is destroyed. Counter of objects: " << counter << std::endl;
    }

};

template <typename T> class AggregateT {
    T prop;
public:
    AggregateT() {
        std::cout << "Object of AggregateT is created." << std::endl;
    }

    ~AggregateT() {
        std::cout << "Object of AggregateT is destroyed." << std::endl;
    }
};

#endif //SADP_TASKS_P2_AGGREGATE_HPP
