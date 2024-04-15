

#include <iostream>
using namespace std;

bool isPrime(int num, int divisor = 2) {
    if (num <= 1) {
        return false;
    }
    if (divisor * divisor > num) {
        return true;
    }
    if (num % divisor == 0) {
        return false;
    }
    return isPrime(num, divisor + 1);
}

int sumOfPrimes(int n) {
    if (n <= 1) {
        return 0;
    }
    if (isPrime(n)) {
        return n + sumOfPrimes(n - 1);
    }
    else {
        return sumOfPrimes(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = sumOfPrimes(n);
    cout << "Tong cac so nguyen to tu 2 den " << n << " là: " << sum << endl;

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
