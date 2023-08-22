
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

    //Tim phan tu cahn duong nho dau tien
    short min;
    short bay = 0;//Khong ton tai phan tu chan va duong
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++) 
            if (a[i][j] % 2 == 0 && a[i][j] > 0) {
                min = a[i][j];
                bay = 1;
                break;
            }

        if (bay)//bay ==1
            break;
    }


        if (!bay)//bay == 0
            cout << "\nKhong ton tai phan tu duong chan trong ma tran";
    else {//Tim phan tu chan duong nho nhat
        for (short i = 0; i < m; i++) 
            for (short j = 0; j < n; j++) 
                if (a[i][j] % 2 == 0 && a[i][j] > 0 && a[i][j] < min)
                    min = a[i][j];
            

        cout << "\nPhan tu chan duong nho nhat: " << min;

    }
    
}

