
#include <iostream>
using namespace std;

int main()
{
    int a[20], X, n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    cout << "Nhap X: ";
    cin >> X;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    for (short i = 0; i < n; i++) {
        cout <<"Day so vua nhap a: ";
        cout << a[i] << "  ";
    }

    short viTriMax;
    int max = a[0];
    viTriMax = 0;

    //tim vi tri phan tu lon nhat
    for (short i = 1; i < n; i++) {
        if (max < a[i]) {// chua cai tien, chi xet vi tri
            max = a[i];
            viTriMax = i;
        }
        //Chen X vao sau 
        for (short i = n; i > viTriMax + 1; i--)
            a[i] = a[i - 1];
        a[viTriMax + 1] = X;
    }
    // xuat day so khi thay phan tu max
    cout << "\nDay sau khi chen phan tu max: ";
    for (short i = 0; i < n + 1; i++)
        cout << a[i] << "  ";
}

