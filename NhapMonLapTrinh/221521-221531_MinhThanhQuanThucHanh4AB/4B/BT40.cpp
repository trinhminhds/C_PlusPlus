#include<iostream>
using namespace std;

int main()
{
    int a[10][10], n, m;
    cout << "Nhap vao so hang n: ";
    cin >> n;
    cout << "Nhap vao so cot m: ";
    cin >> m;

    //Nhap
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    //xuat
    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }

    int max = -1, min = 1;
    for (int i = 0; i < n; i++)
        if (a[i][i] > 1 && (a[i][i]))
        {
            if (a[i][i] > max)
                max = a[i][i];
            if (a[i][i] < min)
                min = a[i][i];
        }
    for (int i = 0; i < n; i++)
        if (a[i][n - i - 1] > 1 && (a[i][n - i - 1]))
        {
            if (a[i][n - i - 1] > max)
                max = a[i][n - i - 1];
            if (a[i][n - i - 1] < min)
                min = a[i][n - i - 1];
        }
    cout << max << " " << min << endl;

    return 0;
}