//
// SADP_tasks_part2_task1
// Class ComplexNumber is dedicated to help perform math operations on complex numbers.
// Created by Grindelf P. the 17th of Feb, 2023.
//
#ifndef SADP_TASKS_P2_COMPLEX_NUMBER_HPP
#define SADP_TASKS_P2_COMPLEX_NUMBER_HPP

#include <ostream>
#include <cmath>

#define NO_BODY {}


class ComplexNumber {
private:
    // main fields representing real and imaginary parts of the complex number
    double real;
    double imaginary;

public:
    // main and unique constructor, can be called implicitly (this case imaginary part of the number would
    // be considered equal to 0 and therefore the number can be treated as a real number ont its own).
    inline ComplexNumber(double real = 0, double imaginary = 0) : real(real), imaginary(imaginary) NO_BODY

    // getters for class' fields
    [[nodiscard]] inline double getReal() const {
        return real;
    }

    [[nodiscard]] inline double getImaginary() const {
        return imaginary;
    }

    // methods of the class
    // returns the complex conjugate of this complex number
    [[nodiscard]] inline ComplexNumber conjugate() const {
        return {real, -imaginary};
    }

    // returns the absolute value of this complex number
    [[nodiscard]] inline double abs() const {
        return sqrt(real * real + imaginary * imaginary);
    }

    // returns the argument of this complex number
    [[nodiscard]] double argument() const {
        if (this->abs() == 0) return 0;
        if (real > 0) return atan(imaginary / real);
        if (real < 0) {
            if (imaginary >= 0) return M_PI + atan(imaginary / real);
            return -M_PI + atan(imaginary / real);
        }
        if (imaginary > 0) return M_PI_2;
        return -M_PI_2;
    }

    // overloads of main math operators for a complex number
    ComplexNumber inline operator+(const ComplexNumber &summand) const {
        return {real + summand.getReal(), imaginary + summand.getImaginary()};
    }

    ComplexNumber inline operator-(const ComplexNumber &subtrahend) const {
        return {real - subtrahend.getReal(), imaginary - subtrahend.getImaginary()};
    }

    ComplexNumber inline operator*(const ComplexNumber &factor) const {
        return {real * factor.getReal() - imaginary * factor.imaginary,
                real * factor.getImaginary() + imaginary * factor.getReal()};
    }

    ComplexNumber inline operator/(const ComplexNumber &denominator) const {
        return {(real * denominator.getReal() + imaginary * denominator.imaginary) /
                (denominator.getReal() * denominator.getReal() +
                 denominator.getImaginary() * denominator.getImaginary()),
                (-real * denominator.getImaginary() + imaginary * denominator.getReal()) /
                (denominator.getReal() * denominator.getReal() +
                 denominator.getImaginary() * denominator.getImaginary())};
    }

    ComplexNumber inline operator-() const {
        return {-real, -imaginary};
    }

    bool inline operator==(const ComplexNumber &comparable) const {
        return real == comparable.real && imaginary == comparable.imaginary;
    }
};

// overload of the << operator of std::ostream namespace, which outputs complex number in
// following form: (realPartOfNumber, imaginaryPartOfNumber)
inline std::ostream &operator<<(std::ostream &_operator, const ComplexNumber &complexNumber) {
    return _operator << '(' << complexNumber.getReal() << ", " << complexNumber.getImaginary() << ')';
}

#endif
