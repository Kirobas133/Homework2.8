#include "RhombusHeader.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D, 1) {
    if ((a == b) && (b == c) && (c == d) && (A == C) && (B == D)) {
        name = "����";
        print_create_info();
    }
    else if ((a != b) || (b != c) || (c != d)) {
        if ((A == C) && (B == D)) {
            throw std::exception("������� �� �����\n");
        }
        else {
            throw std::exception("������� �� �����, � ��� �� ���� A,C � B,D �� ����� �������\n");
        }
    }
    else {
        throw std::exception("���� A,C � B,D �� ����� �������\n");
    }
}