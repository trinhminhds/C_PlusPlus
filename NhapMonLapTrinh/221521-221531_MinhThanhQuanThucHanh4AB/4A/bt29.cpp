#include <iostream>
#include <cmath>
using namespace std;

// Kiểm tra số nguyên tố 
bool KiemTraSNT(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) 
        if (n % i == 0) {
            return false;
        }
    
    return true;
}

// Tính tổng các phần tử nguyên tố trong dãy
int TinhTongPhanTuNguyenTo(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) 
        if (KiemTraSNT(a[i])) {
            tong += a[i];
        }
    
    return tong;
}

int main() {
    int a[10], n;
    cout << "Chuong trinh tinh tong cac phan tu nguyen to trong day\n";

    //Nhap day 
    cout << "Nhap so phan tu trong day: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "     a[" << i << "]=";
        cin >> a[i];
    }

    //Xuat day
    cout << "Day vua nhap: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Tong cac so nguyen to trong day: " << TinhTongPhanTuNguyenTo(a, n);
   
}
