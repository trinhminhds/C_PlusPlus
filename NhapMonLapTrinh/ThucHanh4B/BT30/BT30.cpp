#include <iostream>
#include <algorithm>
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


    int k = 0, l = 0;  
    cout << "Xuat ma tran tang dan theo yeu cau : \n";
    while (k < n && l < m)
    {
        for (int i = l; i < m; i++)
            cout << a[k][i] << " ";
        k++;
        
        for (int i = k; i < n; i++)
            cout << a[i][m - 1] << " ";
        m--;
        

        if (k < n)
        {
            for (int i = m - 1; i >= l; i--)
                cout << a[n - 1][i] << " ";
            n--;
            

        }
            if (l < m)
            {
                for (int i = n - 1; i >= k; i--)
                    cout << a[i][l] << " ";
                l++;
               

            }
    }



    return 0;

}
    