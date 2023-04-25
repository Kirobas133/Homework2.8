// Homework2.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "FigureHeader.h"
#include "TriangleHeader.h"
#include "Triangle90Header.h"
#include "Triangle2SideEqualHeader.h"
#include "TriangleAllEqualHeader.h"
#include "QuadrilateralHeader.h"
#include "ParallelogramHeader.h"
#include "RectangleHeader.h"
#include "SquareHeader.h"
#include "RhombusHeader.h"



void print_info(Figure* fig) {
    fig->print_fig();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle tri(10, 20, 30, 50, 60, 70);
    Triangle90 tri90(10, 20, 30, 50, 60);
    Triangle2SideEqual tri2se(10, 20, 50, 60);
    TriangleAllEqual triae(30);
    Quadrilateral qua(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rec(10, 20);
    Square squa(20);
    Parallelogram prll(20, 30, 30, 40);
    Rhombus rho(30, 30, 40);

    print_info(&tri);
    std::cout << std::endl;
    print_info(&tri90);
    std::cout << std::endl;
    print_info(&tri2se);
    std::cout << std::endl;
    print_info(&triae);
    std::cout << std::endl;
    print_info(&qua);
    std::cout << std::endl;
    print_info(&rec);
    std::cout << std::endl;
    print_info(&squa);
    std::cout << std::endl;
    print_info(&prll);
    std::cout << std::endl;
    print_info(&rho);
    std::cout << std::endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
