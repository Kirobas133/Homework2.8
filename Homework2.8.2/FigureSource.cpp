#include <iostream>
#include "FigureHeader.h"

Figure::Figure(int a, int b, int c, int d, int A, int B, int C, int D) {
    sides_count = 0;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->name = "Фигура";
}
Figure::Figure() {
    sides_count = 0;
    this->A = 0;
    this->B = 0;
    this->C = 0;
    this->D = 0;
    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->d = 0;
    this->name = "Фигура";
}
int Figure::get_sides_count() {
    return sides_count;
}
void Figure::print_fig() {
    if (D == 0) {
        std::cout << name << ":\n";
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << std::endl;
    }
    else {
        std::cout << name << ":\n";
        std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c
            << " d = " << d << std::endl;
        std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C
            << " D = " << D << std::endl;
    }
}