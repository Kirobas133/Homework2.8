#pragma once
#include <string>

class Figure {
protected:
    int sides_count;
    int A, B, C, D;
    int a, b, c, d;
    std::string name;
    Figure(int, int, int, int, int, int, int, int);
public:
    Figure();
    int get_sides_count();
    void print_fig();
};