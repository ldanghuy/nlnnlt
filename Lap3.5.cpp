


#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}

bool areCoprime(int a, int b) {
    return UCLN(a, b) == 1;
}

int main() {
    int m, n;

    cout << "Nhap so nguyen duong m: ";
    cin >> m;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (areCoprime(m, n)) {
        cout << m << " va " << n << " la hai so nguyen to cung nhau." << endl;
    }
    else {
        cout << m << " va " << n << " khong la hai so nguyen to cung nhau." << endl;
    }

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
