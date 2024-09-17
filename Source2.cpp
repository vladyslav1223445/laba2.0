#include <iostream>
#include <cmath>      // ��� ������������ �������
#include <Windows.h>  // ��� ������������ ��������� � ������ Windows

using namespace std;

int main() {
    // ������������ ��������� ��� �������� ��������� ����
    SetConsoleCP(1251);          // ���������� ��������� ��� �������� (Windows-1251)
    SetConsoleOutputCP(1251);    // ���������� ��������� ��� ��������� (Windows-1251)

    double x, y;

    // �������� �������� x
    cout << "������ �������� x: ";
    cin >> x;

    // ����� 1: ��������� ����� ������� ���������
    if (x <= -5)
        y = atan(exp(x)); // arctg(e^x)
    else if (x <= 0)
        y = pow(x, 2) * sin(x / 2) + 1 + pow(x, 3) / 4; // x^2 * sin(x/2) + 1 + x^3/4
    else
        y = log(abs(x)) - x / 5; // ln(|x|) - x/5

    // ��������� ����������
    cout << "��������� (��������� �����): y = " << y << endl;

    // ����� 2: ����� ����� ������� ���������
    if (x <= -5) {
        y = atan(exp(x)); // arctg(e^x)
    }
    else if (x > -5 && x <= 0) {
        y = pow(x, 2) * sin(x / 2) + 1 + pow(x, 3) / 4; // x^2 * sin(x/2) + 1 + x^3/4
    }
    else {
        y = log(abs(x)) - x / 5; // ln(|x|) - x/5
    }

    // ��������� ����������
    cout
