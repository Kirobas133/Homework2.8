#include "Triangle2SideEqualHeader.h"

Triangle2SideEqual::Triangle2SideEqual(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 1) {
    if ((a == c) && (A == C)) {
        name = "�������������� �����������";
        print_create_info();
    }
    else if((a == c) && (A != C)){
        throw std::exception("���� 'A' �� ����� ���� 'C'\n");
    }
    else if ((a != c) && (A == C)) {
        throw std::exception("������� 'a' �� ����� ������� 'c'\n");
    }
    else {
        throw std::exception("������� 'a' �� ����� ������� 'c', � ��� �� ���� 'A' �� ����� ���� 'C'\n");
    }
}