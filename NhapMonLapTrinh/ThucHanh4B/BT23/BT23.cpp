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
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }
    
    int demSoChan = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i][i] % 2 == 0)
        {
            demSoChan++;
        }
    }
    cout << "\nMa tran co " << demSoChan <<" phan tu chan tren duong cheo chinh."<< endl;
    return 0;
}