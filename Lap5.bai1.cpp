// Lap5.bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void copyEvenNumbers(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        if (*source % 2 == 0) {
            *destination = *source;
            ++destination;
        }
        ++source;
    }
}

int main() {
    int sourceArray[10];
    int destinationArray[10];
    int size;

    cout << "Nhap so phan tu cua mang: ";
    cin >> size;

    cout << "Nhap cac phan tu cua mang nguon:\n";
    for (int i = 0; i < size; ++i) {
        cin >> sourceArray[i];
    }

    copyEvenNumbers(sourceArray, destinationArray, size);

    cout << "Mang dich sau khi sao chep cac so chan:\n";
    for (int i = 0; i < size; ++i) {
        cout << destinationArray[i] << " ";
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
