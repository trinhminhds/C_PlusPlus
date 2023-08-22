#include <iostream>
using namespace std;

int main()
{
    int a[20], n,X;
    cout<<"Nhap so luong phan tu n: ";
    cin >> n;
    cout << "Nhap X: ";
    cin >> X;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    cout << "\nDay so vua nhap a: ";
    for (short i = 0; i < n; i++) {
        
        cout << a[i] << "  ";
    }

    cout << "\nDay sau khi chen X vao cac phan tu chan: ";
    for (short i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
        if (a[i] % 2 == 0)
        {
            cout << X << " ";
        }
        
    }

    return 0;
}