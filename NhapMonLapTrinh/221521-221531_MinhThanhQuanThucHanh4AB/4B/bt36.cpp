#include <iostream>
using namespace std;


void Arrange(int a[][100], int n, int m, int x, int y)
{
    // Xet cot
    for (int j = 0; j < m; j++)
    {
        int max = a[0][j];
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }

        for (int i = 0; i < n; i++) {
            if (a[i][j] == max)
                a[i][j] = x;
        }
    }

    // Xet hang
    for (int i = 0; i < n; i++)
    {
        int min = a[i][0];
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }

        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == min)
                a[i][j] = y;
        }
    }

}

int main()
{
    int n, m, x, y;
    int a[100][100];
    cout << "Nhap so dong (n):";
    cin >> n;
    cout << "\nNhap so cot (m):";
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "\nA[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "\nNhap x:";
    cin >> x;
    cout << "\nNhap y:";
    cin >> y;

    cout << "Ma tran vua nhap:\n";
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    Arrange(a, n, m, x, y);

    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
    }


    return 0;
}