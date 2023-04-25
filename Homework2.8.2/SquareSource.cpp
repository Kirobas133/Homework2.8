#include"SquareHeader.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a == b) && (b == c) && (c == d) && (A == B) && (B == C) && (C == D) && (D == 90)) {
        name = "Квадрат";
    }
    else if ((a != b) || (b != c) || (c != d)) {
        if ((A == B) && (B == C) && (C == D) && (D == 90)) {
            throw std::exception("стороны не равны\n");
        }
        else {
            throw std::exception("стороны не равны, а так же углы не равны 90 градусам\n");
        }
    }
    else {
        throw std::exception("углы не равны 90 градусам\n");
    }
}