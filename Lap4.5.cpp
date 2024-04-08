// Lap4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct Ngay {
    int ngay;
    int thang;
    int nam;
};


struct Thoitiet {
    Ngay ngay_thoi_tiet;
    double nhiet_do_cao_nhat;
    double nhiet_do_thap_nhat;
    double toc_do_gio_lon_nhat;
};


Ngay nhiet_do_thap_nhat(Thoitiet arr_thoi_tiet[], int n) {
    Ngay ngay_max_nhiet_do = { 0, 0, 0 };
    double max_nhiet_do = -1000; 

    for (int i = 0; i < n; ++i) {
        if (arr_thoi_tiet[i].ngay_thoi_tiet.thang == 9 && arr_thoi_tiet[i].nhiet_do_cao_nhat > max_nhiet_do) {
            max_nhiet_do = arr_thoi_tiet[i].nhiet_do_cao_nhat;
            ngay_max_nhiet_do = arr_thoi_tiet[i].ngay_thoi_tiet;
        }
    }

    return ngay_max_nhiet_do;
}

int main() {
    const int so_ngay_trong_nam = 365; 

   
    Thoitiet arr_thoi_tiet[so_ngay_trong_nam];

  

  
    Ngay ngay_max_nhiet_do = nhiet_do_thap_nhat(arr_thoi_tiet, so_ngay_trong_nam);

    cout << "Ngay co nhiet do cao nhat trong thang 9/2012 la: " << ngay_max_nhiet_do.ngay << "/"
        << ngay_max_nhiet_do.thang << "/" << ngay_max_nhiet_do.nam << endl;

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
