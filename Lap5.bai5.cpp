

#include <iostream>
using namespace std;

int findMin(int a[], int n) {
    if (n == 1) {
        return a[0];
    }
    int smallerValue = findMin(a, n - 1);
    return (a[n - 1] < smallerValue) ? a[n - 1] : smallerValue;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int minValue = findMin(arr, n);
    cout << "Gia tri nho nhat trong mang la: " << minValue << endl;

    delete[] arr;
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
