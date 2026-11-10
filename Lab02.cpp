// Lab_02.cpp
// Перельотін Максим Олександрович
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double Pi = 4 * atan(1.); // число пі

    double alpha; // вхідний параметр - кут у радіанах
    double z1;
    double z2;

    cout << "alpha = "; cin >> alpha;

    z1 = sin(Pi / 2 + 3 * alpha) / (1 - sin(3 * alpha - Pi));
    z2 = 1 / tan(5 * Pi / 4 + 3 * alpha / 2); // ctg(x) = 1/tan(x)

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get();
    return 0;
}// change 1
