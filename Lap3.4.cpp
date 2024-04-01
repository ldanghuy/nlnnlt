// Lap3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    double number, smallest = 0;
    int count = 0;

    cout << "Nh?p s? th?c (nh?p 0 ?? k?t thúc): ";
    cin >> number;

    while (number != 0) {
        count++; // T?ng s? l??ng s? th?c ?ã nh?p

        if (count == 1 || number < smallest) {
            // C?p nh?t s? th?c nh? nh?t
            smallest = number;
        }

        cout << "Nh?p s? th?c (nh?p 0 ?? k?t thúc): ";
        cin >> number;
    }

    cout << "S? l??ng s? th?c ?ã nh?p: " << count << endl;
    cout << "S? th?c nh? nh?t: " << smallest << endl;

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
