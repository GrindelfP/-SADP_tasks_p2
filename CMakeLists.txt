cmake_minimum_required(VERSION 3.24)
project(SADP_tasks_p2)

set(CMAKE_CXX_STANDARD 17)

add_executable(SADP_tasks_p2 runMe.cpp task3_complexnumber/complexNumber.hpp task1_basics/utils.cpp task1_basics/utils.hpp task1_basics/input-output.cpp task1_basics/input-output.hpp task2_dataoperations/pointer.cpp task3_complexnumber/mainTask3.hpp task2_dataoperations/pointer.hpp task2_dataoperations/arrays.cpp task2_dataoperations/arrays.hpp task2_dataoperations/mainTask2.hpp task2_dataoperations/strings.cpp task2_dataoperations/strings.hpp task4_constructors/string.hpp task4_constructors/mainTask4.hpp task5_lifetime/mainTask5.hpp task5_lifetime/test.cpp task5_lifetime/test.hpp task5_lifetime/child.cpp task5_lifetime/child.hpp task5_lifetime/aggregate.cpp task5_lifetime/aggregate.hpp task6a_refcount/a_string.hpp task6a_refcount/stringContainer.hpp task6a_refcount/mainTask6a.hpp task6_textsearch/mainTask6.hpp task6_textsearch/badCharTable.hpp task6_textsearch/goodSuffixTable.hpp task7_stl/mainTask7.hpp task7_stl/mainTask71.hpp task7_stl/test7.hpp)
