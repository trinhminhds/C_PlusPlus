
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], m, n;
    cout << "Nhap vao so hang m: ";
    cin >> m;
    cout << "Nhap vao so cot n: ";
    cin >> n;

    //Nhap
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    //xuat
    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }


    //Dem so phan tu chan le trong ma tran
    short soPhanTuChan = 0, soPhanTuLe = 0;
    for (short i = 0; i < m; i++) 
        for (short j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                soPhanTuChan++;
            else
                soPhanTuLe++;
    

    cout << "\nSo phan tu chan trong ma tran: " << soPhanTuChan;
    cout << "\nSo phan tu le trong ma tran: " << soPhanTuLe;
}

