#include <iostream>

using namespace std;


double CalculateS(int n) {
    double sum = 0.0;
    int sign = 1; 

    for (int i = 1; i <= n; ++i) {
        sum += sign * (1.0 / i);
        sign *= -1; 
    }

    return sum;
}

int main() {
    int N;

    cout << "Nhap vao so nguyen duong N: ";
    cin >> N;

    double result = CalculateS(N);

    cout << "Tong S(" << N << ") = " << result << endl;

    return 0;
}
