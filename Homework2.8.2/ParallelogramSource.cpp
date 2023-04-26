#include "ParallelogramHeader.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D, 1) {
    if ((a == c) && (b == d) && (A == C) && (B == D)) {
        name = "�������������";
        print_create_info();
    }
    else if ((A == C) && (B == D)){
        throw std::exception("������� a,c � b,d �� ����� �������\n");
    }
    else if ((a == c) && (b == d)) {
        throw std::exception("���� A,C � B,D �� ����� �������\n");
    }
    else {
        throw std::exception("������� a,c � b,d �� ����� �������, � ��� �� ���� A,C � B,D �� ����� �������\n");
    }
}