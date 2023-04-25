#include "RectangleHeader.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((A == B) && (B == C) && (C == D) && (D == 90) && (a == c) && (b == d)) {
        name = "Прямоугольник";
    }
    else if ((A != B) || (B != C) || (C != D) || (D != 90)) {
        if ((a == c) && (b == d)) {
            throw std::exception("углы не раны 90 градусам\n");
        }
        else {
            throw std::exception("углы не раны 90 градусам, а так же стороны a,c и b,d не равны попарно\n");
        }
    }
    else {
        throw std::exception("стороны a,c и b,d не равны попарно\n");
    }
}