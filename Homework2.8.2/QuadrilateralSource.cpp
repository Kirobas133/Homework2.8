#include <iostream>
#include "QuadrilateralHeader.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(a, b, c, d, A, B, C, D) {
	if ((A + B + C + D) == 360) {
		sides_count = 4;
		name = "���������������";
		std::cout << "�������������� ������ \n";
	}
	else {
		throw std::exception("����� ����� �� ����� 360\n");
	}
}