#include "Triangle2SideEqualHeader.h"

Triangle2SideEqual::Triangle2SideEqual(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) {
    if ((a == c) && (A == C)) {
        name = "Равнобедренный треугольник";
    }
    else if((a == c) && (A != C)){
        throw std::exception("угол 'A' не равен углу 'C'\n");
    }
    else if ((a != c) && (A == C)) {
        throw std::exception("сторона 'a' не равна стороне 'c'\n");
    }
    else {
        throw std::exception("сторона 'a' не равна стороне 'c', а так же угол 'A' не равен углу 'C'\n");
    }
}