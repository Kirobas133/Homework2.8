#include "Triangle90Header.h"

Triangle90::Triangle90(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 1) {
	if (C == 90) {
		name = "Прямоугольный треугольник";
		print_create_info();
	}
	else {
		throw std::exception("угол С не равен 90 градусов.\n");
	}
}