// Lap4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX = 100;


void nhapMaTran(int a[][MAX], int& n, int& m) {
    cout << "Nhap so hang n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;

    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}


void chuyenViMaTran(int a[][MAX], int n, int m, int b[][MAX]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            b[i][j] = a[j][i];
        }
    }
}


void xuatMaTran(int a[][MAX], int n, int m) {
    cout << "Ma tran:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int n, m;

    nhapMaTran(a, n, m);
    chuyenViMaTran(a, n, m, b);
    xuatMaTran(b, m, n);

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
