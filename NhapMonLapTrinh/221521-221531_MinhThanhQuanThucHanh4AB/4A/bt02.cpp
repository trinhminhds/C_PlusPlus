
#include <iostream>
using namespace std;

int main()
{
    double a[20], n;
    cout << "Nhap xuat day 1 chieu duong\n";
    cout<< "Nhap vao so phan tu n";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout <<" a[" << i << "]=";
        cin >> a[i];
        while (a[i] <= 0) {
            cout << "   Phai nhap vao so duong, moi ban nhap lai: ";
            cout << "a[" << i << "]=";
            cin >> a[i];
        }
    }
    cout << "Dau vua nhap: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << "  ";
            
    

    
}

