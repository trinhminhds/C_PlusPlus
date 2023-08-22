#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[10][10], n, m ;
    cout << "Nhap so hang n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;

    //Nhap ma tran a[n][m]
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    //Xuat ma tran a[n][m]
    cout << "Ma tran vua nhap:\n";
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }



    int tongMax = 0, tongMin = 0;
    int maxDong = 0, minDong = 0;
    for (short i = 0; i < n; i++)
    {
        int tong = 0;
        for (int j = 0; j < m; j++)
        {
            tong += a[i][j];
        }
        if (tong > tongMax)
        {
            tongMax = tong;
            maxDong = i;
        }
        if (tong < tongMin)
        {
            tongMin = tong;
            minDong = i;
        }
    }


    swap_ranges( maxDong, maxDong + 3, minDong);
    cout << "Ma tran sau khi doi: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
