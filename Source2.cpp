#include <iostream>
#include <cmath>      // Для математичних функцій
#include <Windows.h>  // Для встановлення кодування в консолі Windows

using namespace std;

int main() {
    // Встановлення кодування для підтримки української мови
    SetConsoleCP(1251);          // Встановлює кодування для введення (Windows-1251)
    SetConsoleOutputCP(1251);    // Встановлює кодування для виведення (Windows-1251)

    double x, y;

    // Введення значення x
    cout << "Введіть значення x: ";
    cin >> x;

    // Спосіб 1: Скорочена форма умовних операторів
    if (x <= -5)
        y = atan(exp(x)); // arctg(e^x)
    else if (x <= 0)
        y = pow(x, 2) * sin(x / 2) + 1 + pow(x, 3) / 4; // x^2 * sin(x/2) + 1 + x^3/4
    else
        y = log(abs(x)) - x / 5; // ln(|x|) - x/5

    // Виведення результату
    cout << "Результат (скорочена форма): y = " << y << endl;

    // Спосіб 2: Повна форма умовних операторів
    if (x <= -5) {
        y = atan(exp(x)); // arctg(e^x)
    }
    else if (x > -5 && x <= 0) {
        y = pow(x, 2) * sin(x / 2) + 1 + pow(x, 3) / 4; // x^2 * sin(x/2) + 1 + x^3/4
    }
    else {
        y = log(abs(x)) - x / 5; // ln(|x|) - x/5
    }

    // Виведення результату
    cout
