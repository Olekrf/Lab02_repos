// Lab_02.cpp
// < Лазарук Олег >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 17
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Створення змінних
    double m;
    double z1;
    double z2;
    // Заповнення змінної m
    cout << "m=";
    cin >> m;
    // Обчислення значень виразів
    z1 = (sqrt(pow(3 * m + 2, 2) - 24 * m)) / (3 * sqrt(m) - 2 / sqrt(m));
    //z2 = sqrt(m);
    // Виведення результатів
    cout << "z1=" << z1 << endl;
    cout << "z2=" << z2 << endl;

    cin.get();

    return 0;
}
