#include <iostream>
#include "QuadrilateralHeader.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(a, b, c, d, A, B, C, D, 1) {
	if ((A + B + C + D) == 360) {
		sides_count = 4;
		name = "���������������";
		print_create_info();
	}
	else {
		throw std::exception("����� ����� �� ����� 360\n");
	}
}
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, int t) :Figure(a, b, c, d, A, B, C, D, 1) {
	if ((A + B + C + D) == 360) {
		sides_count = 4;
		name = "���������������";
	}
	else {
		throw std::exception("����� ����� �� ����� 360\n");
	}
}