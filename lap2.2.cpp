// lap2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int player1, player2;
    cout << "chon 1 cho keo, 2 cho bua, 3 cho bao:" ;
    cout << "nguoi choi 1: ";
    cin >> player1;
    cout << "nguoi choi 2: ";
    cin >> player2;
    if ((player1 == 1 && player2 == 1) || (player1 == 2 && player2 == 2) || (player1 == 3 && player2 == 3)) {
        cout << "Hoa nhau!" ;
    }
    else if ((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2)) {
        cout << "nguoi choi 1 thang!" ;
    }
    else if ((player2 == 1 && player1 == 3) || (player2 == 2 && player1 == 1) || (player2 == 3 && player1 == 2)) {
        cout << "nguoi choi 2 thang!" ;
    }
    else { (cout << "loi cu phap nhap"); }
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
