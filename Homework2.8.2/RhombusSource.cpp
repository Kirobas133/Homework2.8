#include "RhombusHeader.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a == b) && (b == c) && (c == d) && (A == C) && (B == D)) {
        name = "–омб";
    }
    else if ((a != b) || (b != c) || (c != d)) {
        if ((A == C) && (B == D)) {
            throw std::exception("стороны не равны\n");
        }
        else {
            throw std::exception("стороны не равны, а так же углы A,C и B,D не равны попарно\n");
        }
    }
    else {
        throw std::exception("углы A,C и B,D не равны попарно\n");
    }
}