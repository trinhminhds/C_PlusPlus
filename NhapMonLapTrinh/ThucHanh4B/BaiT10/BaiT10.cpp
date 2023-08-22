
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n;
    cout << "Nhap so hang, cot cua ma tran: ";
    cin >> n;

    for (short i = 0; i < n; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }

        int tong = 0;
        short min = a[0][0];
        for (short i = 0; i < n; i++) {
            for (short j = 0; j < n; j++) {
                if (a[j][i] < min) {
                    min = a[j][i];
                }
            }
            tong += min;
        }
        cout << "\nTong cac gia tri nho nhat tren tung duong cheo phu thuan: " << tong << endl;
        return 0;
    }





