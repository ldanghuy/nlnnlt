

#include <iostream>
using namespace std;

int main() {
    double number, smallest = 0;
    int count = 0;

    cout << "Nhap so thuc (nhap 0 de ket thúc): ";
    cin >> number;

    while (number != 0) {
        count++; 

        if (count == 1 || number < smallest) {
            
            smallest = number;
        }

        cout << "Nhap so thuc (nhap 0 de ket thuc): ";
        cin >> number;
    }

    cout << "So luong so thuc da nhap: " << count << endl;
    cout << "So thuc nho nhat: " << smallest << endl;

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
