// Lab_03_1.cpp
// < Цай Девід >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 23
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, A, B;
    cout << " x = ";
    cin >> x;
    if (x < -5) {
        y = pow(x, 2) + sin(4 * x / 3) + 1 / tan(x);
    }
    else if (x >= -5 && x <= 0) {
        y = pow(x, 2) + sin(4 * x / 3) + 4 - (pow(x, 2) / 2);
    }
    else if (x > 0) {
        y = pow(x, 2) + sin(4 * x / 3) + log10(pow(x, 2) - (4 * x / 3));
    }
    cout << endl;
    cout << "1) y = " << y << endl;
    A = pow(x, 2) + sin(4 * x / 3);
    if (x < -5) {
        B = 1 / tan(x);
    }
    if (x >= -5 && x <= 0) {
        B = 4 - (pow(x, 2) / 2);
    }
    if (x > 0) {
        B = log10(pow(x, 2) - (4 * x / 3));
    }
    y = A + B;
    cout << endl;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;

}

