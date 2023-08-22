
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n;
    cout << "Nhap so hang, cot cua ma tran vuong: ";
    cin >> n;

    for (short i = 0; i < n; i++) 
        for (short j = 0; j < n; j++) {
            cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    

    cout << "\nMa tran vuong vua nhap: \n";
    for (short i = 0; i < n; i++) 
        for (short j = 0; j < n; j++) {
            cout << a[i][j] << "  ";
            cout << "\n";
        }
    

    //tinh tong phan tu am tren duong cheo chinh
    int tong = 0;
    for (short i = 0; i < n; i++) {
        if (a[i][i] < 0) {
            tong += a[i][i];
        }
    }

    cout << "Tong phan tu am tren duong cheo chinh: " << tong << endl;

    return 0;
}


