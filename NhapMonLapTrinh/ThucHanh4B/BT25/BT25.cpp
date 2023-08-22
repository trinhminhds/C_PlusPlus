
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


    int demSo = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
        {
            short dKien = true;
            if (i > 0 && a[i][j] <= a[i - 1][j])
                dKien = false;
            if (j > 0 && a[i][j] <= a[i][j - 1])
                dKien = false;
            if (i < m - 1 && a[i][j] <= a[i + 1][j])
                dKien = false;
            if (j < n - 1 && a[i][j] <= a[i][j + 1])
                dKien = false;
            if (dKien)
                demSo++;
        }

    cout << "\nMa tran co " << demSo << " phan tu cuc dai so voi phan tu xung quanh."<< endl;

    return 0;
}






