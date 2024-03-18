// Lap2.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int ngay, thang, nam; float L;
    cout << "Nhap ngay thang nam sinh cua ban de tinh so lan sinh nhat\n";
    cout << "Ngay sinh:";
    cin >> ngay;
    cout << "Thang sinh:";
    cin >> thang;
    cout << "Nam sinh:";
    cin >> nam;

    if (ngay == 29 && thang == 2) {
        L = (2000 - nam) / 4;
    }
    else {
        L = 2000 - nam;
    }
    cout << "So lan sinh nhat la:" << L;
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
