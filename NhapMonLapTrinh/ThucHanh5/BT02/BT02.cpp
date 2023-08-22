#include <iostream>
#include <cmath>
using namespace std;

short timKySo(int m, int n);

int main() {
    int m, n;
    cout << "Nhap so nguyen m: ";
    cin >> m;

    cout << "\nNhap vi tri n: ";
    cin >> n;
    cout << "\nXuat ra ky so tai vi tri: ";
    cout << timKySo(m, n) << endl; 
    
}

//Xuat ra ky so tai vi tri
short timKySo(int m, int n) {
    if (n < 0)
        return -1;
    int tim = log10(m) + 1;
    if (n >= tim)
        return -1;
    return (m / (int)pow(10, n)) % 10;
}


//11:19 AM 4/19/2023 Da test xong.