// Lap5.bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int sumEvenDigit(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    int lastDigit = n % 10;
    if (!isEven(lastDigit)) {
        return lastDigit + sumEvenDigit(n / 10);
    }
    return sumEvenDigit(n / 10);
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int result = sumEvenDigit(n);
    cout << "Tong cac chu so le cua " << n << " la: " << result << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
