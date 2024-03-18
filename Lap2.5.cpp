// Lap2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int x1, y1, R1, x2, y2, R2, d;
    cout << "Nhap toa do va ban kinh hinh tron 1\n";
    cout << "x=";
    cin >> x1;
    cout << "y=";
    cin >> y1;
    cout << "Ban kinh R=";
    cin >> R1;
    cout << "Nhap toa do va ban kinh hinh tron 2\n";
    cout << "x=";
    cin >> x2;
    cout << "y=";
    cin >> y2;
    cout << "Ban kinh R=";
    cin >> R2;
    d = sqrt((x2 - x1) ^ 2 - (y2 - y1) ^ 2);
    if (x1 == x2 && y1 == y2 && R1 == R2) {
        cout << "Vo so diem (Trung nhau)";
    }
    else if (R1 + R2 > d && abs(R1 - R2) < d) {
        cout << " Hai diem (Cat nhau)";
    }
    else if ((abs(R1 - R2) == d) || (R1 + R2 == d)) {
        cout << "Mot diem(Tiep xuc nhau)";
    }
    else { cout << "Khong co diem cat nhau"; }
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
