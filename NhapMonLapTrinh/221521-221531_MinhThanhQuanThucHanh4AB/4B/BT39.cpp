#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, m;
    cout << "Nhap vao n so hang cua ma tran vuong : ";
    cin >> n;
    cout << "Nhap vao m so cot cua ma tran vuong : ";
    cin >> m;

    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }


    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }


    for (short i = 0; i < n; i++)
    {
        int maxHang = a[i][0], colIndex = 0;
        for (short j = 1; j < m; j++)
            if (a[i][j] > maxHang)
            {
                maxHang = a[i][j];
                colIndex = j;
            }

        int minCol = a[0][colIndex];
        for (short j = 1; j < n; j++)
            if (a[j][colIndex] < minCol)
                minCol = a[j][colIndex];

        if (maxHang == minCol)
            cout << "A[" << i << "][" << colIndex << "]=" << maxHang << endl;
    }
    return 0;
}