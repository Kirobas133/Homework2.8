#include "TriangleAllEqualHeader.h"

TriangleAllEqual::TriangleAllEqual(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 1) {
	if ((a == b) && (b == c) && (A == B) && (B == C) && (C == 60)) {
		name = "Равносторонний треугольник";
		print_create_info();
	}
	else if ((a != b) || (b != c)) {
		if ((A == B) && (B == C) && (C == 60)) {
			throw std::exception("стороны не равны\n");
		}
		else {
			throw std::exception("стороны не равны, а так же углы не равны 60 градусов\n");
		}
	}
	else {
		throw std::exception("углы не равны 60 градусам\n");
	}
}