#include"SquareHeader.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((a == b) && (b == c) && (c == d) && (A == B) && (B == C) && (C == D) && (D == 90)) {
        name = "�������";
    }
    else if ((a != b) || (b != c) || (c != d)) {
        if ((A == B) && (B == C) && (C == D) && (D == 90)) {
            throw std::exception("������� �� �����\n");
        }
        else {
            throw std::exception("������� �� �����, � ��� �� ���� �� ����� 90 ��������\n");
        }
    }
    else {
        throw std::exception("���� �� ����� 90 ��������\n");
    }
}