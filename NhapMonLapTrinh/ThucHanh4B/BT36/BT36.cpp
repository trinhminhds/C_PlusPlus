#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, m, x, y;
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;


    //Nhap ma tran 
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    //Xuat ma tran 
    cout << "Ma tran vua nhap:\n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }


    cout << "\nNhap so hang x: ";
    cin >> x;
    cout << "Nhap so cot y: ";
    cin >> y;

    
    for (int j = 0; j < n; j++)
    {
        int max = a[0][j];
        for (int i = 1; i < m; i++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
        for (int i = 0; i < m; i++)
        {
            if (a[i][j] == max)
                a[i][j] = x;
        }
    }

    
    for (int i = 0; i < m; i++)
    {
        int min = a[i][0];
        for (int j = 1; j < n; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == min)
                a[i][j] = y;
        }
    }

    cout << "\nMa tran khi thay doi cot lon nhat bang x:  " << x << "\nMa tran khi thay doi hang nho nhat bang y: " << y << "\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
                cout << endl;
            cout << a[i][j] << " ";
        }

    return 0;
}