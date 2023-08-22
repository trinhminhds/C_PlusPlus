#include <iostream>
#include <cmath>
using namespace std;

bool nguyenTo(int m)
{
    if (m <= 1)
       
        return false;
    for (short i = 2; i <= sqrt(m); i++)
       
            if (m % i == 0)
             
            return false;
    return true;
}
int main()
{
    int a[10][10], m, n;
    cout << "Nhap vao so hang m: ";
    cin >> m;
    cout << "Nhap vao so cot n: ";
    cin >> n;

    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

    cout << "\nMa tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }

    int NtChinh = 0, NtPhu = 0;
    //Duong cheo chinh
    for (short i = 0; i < m; i++)
            if (nguyenTo(a[i][i]))
                NtChinh++;
    
    //Duong cheo phu
    for (short i = 0; i < m; i++)
        if (nguyenTo(a[i][m - 1 - i]))
                NtPhu++;
       

    cout << "\nMa tran co " << NtChinh << " phan tu la so nguyen to tren duong cheo chinh" << endl;
    cout << "\nMa tran co " << NtPhu << " phan tu la so nguyen to tren duong cheo phu" << endl;
    return 0;
    
}