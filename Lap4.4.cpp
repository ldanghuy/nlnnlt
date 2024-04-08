

#include <iostream>
#include <string>
using namespace std;


int xuat_hien(char* chuoi_hien_tai, char* chuoi_con) {
    string str(chuoi_hien_tai);
    string subStr(chuoi_con);

    size_t lastIndex = str.find_last_of(subStr);

    if (lastIndex != string::npos) {
        return static_cast<int>(lastIndex);
    }
    else {
        return -1; 
    }
}

int main() {
    char chuoi_hien_tai[] = "This is a sample string. It contains multiple occurrences of 'sample'.";
    char chuoi_con[] = "sample";

    int vi_tri_cuoi_cung = xuat_hien(chuoi_hien_tai, chuoi_con);

    if (vi_tri_cuoi_cung != -1) {
        cout << "Vi tri xuat hien cuoi cung cua chuoi con '" << chuoi_con << "' là: " << vi_tri_cuoi_cung << endl;
    }
    else {
        cout << "Khong tim thay chuoi con trong chuoi hien tai." << endl;
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
