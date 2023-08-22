#include <iostream>
using namespace std;

int main()
{
    int a[10][10],m, n ;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    
    for (short i = 0; i < m; ++i)
        for (short j = 0; j < n; ++j) {
            cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }


    int min = a[0][0], hang = 0, cot = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] < min)
            {
                min = a[i][j];
                hang = i;
                cot = j;
            }
    cout << "Vi tri cua phan tu nho nhat trong ma tran: " << "a[" << hang << "][" << cot << "]";
    
    
    return 0;
}