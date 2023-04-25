#include "QuadrilateralHeader.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(a, b, c, d, A, B, C, D) {
	sides_count = 4;
	name = "Четырехугольник";
}