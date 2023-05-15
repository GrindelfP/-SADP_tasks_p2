//
// SADP_part2_task2 exercises with pointers
//

#include "pointer.hpp"

// Function of pointer processing.
void pointerProcedures() {
    int x = 3;
    int *p = &x;

    std::cout << x << ' ' << *p << ' ' << p << std::endl;

    p++;
    std::cout << p << std::endl;

    std::cout << p - &x << std::endl;
}

// Function of pointer positioning.
void pointerPositioning() {
    using namespace std;

    int x = 3;
    int *p = &x;

    typedef unsigned char byte;
    byte *pb = (byte *) p;
    for (byte *pt = pb; pt - pb < sizeof(int); pt++) cout << (int) *pt << ' ';
    cout << endl;
}

// Function of pointer swapping.
void swap(int *pa, int *pb) {
    int temp = *pb;
    *pb = *pa;
    *pa = temp;
}
