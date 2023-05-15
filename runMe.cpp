//
// Created by Grindelf P. the 20th of Feb, 2023.
// Part of the project - SADP_tasks_part2, 2023.
//

#include "task2_dataoperations/mainTask2.hpp"
#include "task3_complexnumber/mainTask3.hpp"
#include "task4_constructors/mainTask4.hpp"
#include "task5_lifetime/mainTask5.hpp"
#include "task6a_refcount/mainTask6a.hpp"
#include "task7_stl/mainTask7.hpp"
#include "task6_textsearch/mainTask6.hpp"
#include "task7_stl/mainTask71.hpp"

// Main function.
int main() {
    int taskNumber = 0;
    std::cin >> taskNumber;

    switch (taskNumber) {
        case 2:
            mainTask2();
            break;
        case 3:
            mainTask3();
            break;
        case 4:
            mainTask4();
            break;
        case 5:
            mainTask5();
            break;
        case 61:
            mainTask6a();
            break;
        case 6:
            mainTask6();
            break;
        case 7:
            mainTask7();
            break;
        case 71:
            mainTask71();
            break;
    }

    return 0;
}
