//
// Created by gregory on 2/27/23.
//

#ifndef SADP_TASKS_P2_MAINTASK3_HPP
#define SADP_TASKS_P2_MAINTASK3_HPP

#include <iostream>
#include "complexNumber.hpp"

void mainTask3() {
    ComplexNumber complexNumbers1[4] {1, 2, ComplexNumber(2, 3)};

    // complex numbers' array output
    std::cout << '[';
    int i;
    for (i = 0; i < 3; i++) std::cout << complexNumbers1[i] << ", ";
    std::cout << complexNumbers1[i];
    std::cout << ']' << std::endl;

    // pointers operations
    auto *pComplexNumber = new ComplexNumber(4, 5);
    std::cout << "Complex number: " << *pComplexNumber << std::endl;
    std::cout << "Real number: " << pComplexNumber->getReal() << std::endl;
    std::cout << "Real number: " << pComplexNumber->getImaginary() << std::endl;
    delete pComplexNumber;


    auto *complexNumbers2 = new ComplexNumber[3];
    std::cout << "Real of un uninitialized complex number: " << complexNumbers2[1].getReal() << std::endl;

    // complexNumbersOperations !!WHAT is the diff between type_var.method() and type_var->method()
    ComplexNumber complexNumber1(5, 7);
    ComplexNumber complexNumber2(7, 9);
    std::cout << "+ " << complexNumber1 + complexNumber2 << std::endl;
    std::cout << "- " << complexNumber1 - complexNumber2 << std::endl;
    std::cout << "* " << complexNumber1 * complexNumber2 << std::endl;
    std::cout << "/ " << complexNumber1 / complexNumber2 << std::endl;
    std::cout << "abs " << complexNumber1.abs() << std::endl;
    std::cout << "argument " << complexNumber1.argument() << std::endl;
    std::cout << "- un " << -complexNumber1 << std::endl;
    std::cout << "== " << (complexNumber1 == complexNumber1) << std::endl;
    std::cout << "conjugate " << complexNumber1.conjugate() << std::endl;
}

#endif //SADP_TASKS_P2_MAINTASK3_HPP
