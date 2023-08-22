
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], m, n;
    cout << "Nhap vao so hang m: ";
    cin >> m;
    cout << "Nhap vao so cot n: ";
    cin >> n;


    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
            cin >> a[i][j];

            while (a[i][j] < 0)
            {
                cout << "Phai nhap phan tu duong, xin moi nhap lai ";
                cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
                cin >> a[i][j];
            }
        }

    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }

    int hang = 0, cot = 0;
    for (short i = m - 1; i >= 0; i--) {
        for (short j = n - 1; j >= 0; j--)
            if (a[i][j] % 2 == 0)
            {
                hang = i;
                cot = j;
            }

        cout << "Vi tri cua phan tu chan cuoi cung trong ma tran: " << "a[" << hang << "][" << cot << "]";


        return -1;
    }
        

}

