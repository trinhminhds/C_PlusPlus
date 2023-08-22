#include <iostream>
using namespace std;

bool soNguyenTo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a[10][10], m, n;
    cout << "Nhap vao so hang cua ma tran: ";
    cin >> m ;
    cout << "Nhap vao so cot cua ma tran: ";
    cin >> n;


    //Nhap
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

    //xuat
    cout << "\nMa tran vuong vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++) 
            cout << a[i][j] << "  ";
            cout << "\n";
    }

    //Tinh tong so nguyen to trong ma tran
    int tong = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (soNguyenTo(a[i][j])) {
                tong += a[i][j];
            }
        }
    }

    cout << "\nTong so nguyen to trong ma tran vuong: " << tong << endl;



    return 0;

}