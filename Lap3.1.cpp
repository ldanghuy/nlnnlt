// Lap3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> // Thư viện cho hàm pow()

using namespace std;

// Hàm tính lũy thừa a^n
double Power_n(int x, int n) {
    double result = 1;
    // Sử dụng vòng lặp for với điều kiện n--
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    float a;
    int n;

    cout << "Nhập vào cơ số a: ";
    cin >> a;

    cout << "Nhập vào số mũ n: ";
    cin >> n;

    // Gọi hàm Power_n() để tính a^n
    double an = Power_n(a, n);

    cout << fixed; // Hiển thị số thập phân cố định
    cout << a << "^" << n << " = " << an << endl;

    return 0;
}
