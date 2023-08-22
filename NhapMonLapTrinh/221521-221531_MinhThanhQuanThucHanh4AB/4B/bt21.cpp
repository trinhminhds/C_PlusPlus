#include <iostream>
#include <cmath>
using namespace std;

// Kiểm tra số nguyên tố 
bool KiemTraSNT(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Đếm số phần tử nguyên tố trong ma trận 
int DemSoPhanTuNguyenTo(int a[][10], int m, int n) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (KiemTraSNT(a[i][j])) {
                dem++;
            }
        }
    }
    return dem;
}

int main() {

    int a[10][10], m, n;

    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    // Nhập ma trận a[m][n]
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    // Xuất ma trận a[m][n]
    cout << "Ma tran vua nhap:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    int soPhanTuNguyenTo = DemSoPhanTuNguyenTo(a, m, n);
    cout << "So phan tu nguyen to trong ma tran la: " << soPhanTuNguyenTo;

    return 0;
}
