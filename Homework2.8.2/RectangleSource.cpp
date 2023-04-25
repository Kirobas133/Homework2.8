#include "RectangleHeader.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) {
    if ((A == B) && (B == C) && (C == D) && (D == 90) && (a == c) && (b == d)) {
        name = "�������������";
    }
    else if ((A != B) || (B != C) || (C != D) || (D != 90)) {
        if ((a == c) && (b == d)) {
            throw std::exception("���� �� ���� 90 ��������\n");
        }
        else {
            throw std::exception("���� �� ���� 90 ��������, � ��� �� ������� a,c � b,d �� ����� �������\n");
        }
    }
    else {
        throw std::exception("������� a,c � b,d �� ����� �������\n");
    }
}