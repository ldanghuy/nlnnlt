


#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void init(int**& a, int m, int n) {
    a = new int* [m];
    for (int i = 0; i < m; ++i) {
        a[i] = new int[n];
    }

    srand(time(NULL));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = rand() % 10; 
        }
    }
}

void transposeMatrix(int** a, int m, int n, int**& b) {
    b = new int* [n];
    for (int i = 0; i < n; ++i) {
        b[i] = new int[m];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            b[j][i] = a[i][j];
        }
    }
}

int main() {
    int m, n;
    int** a;
    int** b;

    cout << "Nhap so hang va so cot cua ma tran: ";
    cin >> m >> n;

    if (m <= 0 || n <= 0) {
        cout << "Nhap khong hop le!" << endl;
    }
    else {
        init(a, m, n);
        cout << "Ma tran ngau nhien a:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        transposeMatrix(a, m, n, b);
        cout << "Ma tran chuyen vi b:" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < m; ++i) {
            delete[] a[i];
        }
        delete[] a;

        for (int i = 0; i < n; ++i) {
            delete[] b[i];
        }
        delete[] b;
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
