#pragma once
#include "FigureHeader.h"

class Triangle :public Figure {
public:
	Triangle(int, int, int, int, int, int);
	int get_sides_count();
};