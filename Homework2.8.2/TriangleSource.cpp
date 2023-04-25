#include <iostream>
#include "TriangleHeader.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure(a, b, c, 0, A, B, C, 0) {
    if ((A + B + C) == 180) {
        sides_count = 3;
        name = "Треугольник";
        std::cout << "треугольник создан \n";
    }
    else {
        throw std::exception("сумма углов не равна 180\n");
    }
}
int Triangle::get_sides_count() {
    return sides_count;
}