#include <iostream>
using namespace std;

int main() {
    int a[10], n, x;
    cout << "Chuong trinh xoa phan tu co gia tri gan X nhat va nho hon X\n";
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap day n: ";
    cin >> n;

    //Nhap day
    for (short i = 0; i < n; i++) {
        cout << "     a[" << i << "]=";
        cin >> a[i];
    }

    //Xuat day a
    cout << "\nDay vua nhap a: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << " ";

    int khoanCachMin = abs(a[0] - x);
    int viTriMin = 0;
    for (short i = 1; i < n; i++) {
        int khoanCach = abs(a[i] - x);
        if (khoanCach < khoanCachMin && a[i] < x) {
            khoanCachMin = khoanCach;
            viTriMin = i;
        }
    }

    if (khoanCachMin != abs(a[0] - x)) {
        for (short i = viTriMin; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
        cout << "\nDay so sau khi xoa la: \n";
        for (short i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    else
        cout << "\nKhong tim thay phan tu thoa man de xoa.";

    return 0;
}
