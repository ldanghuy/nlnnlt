

#include <iostream>
using namespace std;

const int MAX = 100;


void nhapChuoi(char str[], int& length) {
    cout << "Nhap chuoi: ";
    cin.getline(str, MAX);
    length = strlen(str);
}


char timKyTuXuatHienILan(char str[], int length, int i) {
    if (i <= 0 || i > length) {
        cout << "i khong hop le. Nhap i trong khoang (1, " << length << "): ";
        return '!';
    }

    int count[MAX] = { 0 }; 
    for (int j = 0; j < length; ++j) {
        count[str[j]]++;
        if (count[str[j]] == i) {
            return str[j];
        }
    }

    return '!';
}

int main() {
    char str[MAX];
    int length, i;

    nhapChuoi(str, length);
    cout << "Nhap i: ";
    cin >> i;

    char result = timKyTuXuatHienILan(str, length, i);
    if (result == '!') {
        cout << "Khong tim thay ky tu!" << endl;
    }
    else {
        cout << "Ky tu xuat hien " << i << " lan la: " << result << endl;
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
