// Mid_term mssv 2305ct0553.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string danhsachMSSV[5] = { "", "2303CT7777", "2302CT3333", "2306CT9999", "2301CT1111" };

    std::cout << "Vui long nhap MSSV cua ban: ";
    std::cin >> danhsachMSSV[0];

    for (int i = 0; i < 5; i++) {
        std::cout << "MSSV[" << i << "]: " << danhsachMSSV[i] << std::endl;
    }

    std::string danhsachMSSVSapXep[5];
    std::copy(danhsachMSSV, danhsachMSSV + 5, danhsachMSSVSapXep);
    std::sort(danhsachMSSVSapXep, danhsachMSSVSapXep + 5);
    std::cout << "Mang sau khi sap xep: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "MSSV[" << i << "]: " << danhsachMSSVSapXep[i] << std::endl;
    }

    std::string* ptrArrayMSSV = std::max_element(danhsachMSSV, danhsachMSSV + 5);
    std::cout << "dia chi cua phan tu chua MSSV lon nhat: " << ptrArrayMSSV << std::endl;
    std::cout << "Phan tu chua MSSV lon nhat: " << *ptrArrayMSSV << std::endl;

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
