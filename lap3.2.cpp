// Lap3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool IsPrime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    if (IsPrime(n)) {
        cout << n << " la so nguyen to!" << endl;
    }
    else {
        cout << n << " khong là so nguyen to!" << endl;
    }

    return 0;
}
