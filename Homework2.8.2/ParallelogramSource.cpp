#include "ParallelogramHeader.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a == c) && (b == d) && (A == C) && (B == D)) {
        name = "Параллелограм";
    }
    else if ((A == C) && (B == D)){
        throw std::exception("стороны a,c и b,d не равны попарно\n");
    }
    else if ((a == c) && (b == d)) {
        throw std::exception("углы A,C и B,D не равны попарно\n");
    }
    else {
        throw std::exception("стороны a,c и b,d не равны попарно, а так же углы A,C и B,D не равны попарно\n");
    }
}