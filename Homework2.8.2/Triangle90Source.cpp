#include "Triangle90Header.h"

Triangle90::Triangle90(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) {
	if (C == 90) {
		name = "������������� �����������";
	}
	else {
		throw std::exception("���� � �� ����� 90 ��������.\n");
	}
}