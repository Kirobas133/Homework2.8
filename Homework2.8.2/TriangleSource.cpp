#include "TriangleHeader.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure(a, b, c, 0, A, B, C, 0) {
    sides_count = 3;
    name = "Треугольник";
}
int Triangle::get_sides_count() {
    return sides_count;
}