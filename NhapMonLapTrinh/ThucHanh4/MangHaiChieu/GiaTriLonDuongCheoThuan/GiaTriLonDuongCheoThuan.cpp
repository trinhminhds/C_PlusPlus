
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, max;
    cout << "Nhap vao so hang n cua ma tran: ";
    cin >> n;
    cout << "Nhap vao so hang n cua ma tran: ";
    cin >> n;

    for (short i = 0; i < n; i++)
        for (short j = 0; j < n; j++){
            cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
                cin >> a[i][j];
    }

    max = a[0][0];
    for (short i = 1; i < n; i++)
        if (max < a[i][i])
            max = a[i][i];
    cout << "Gia tri lon tren tren duong cheo thuan: " << max;


        
}

