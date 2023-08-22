
#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << " a[" << i << "]=";
        cin >> a[i];
    }
    //Xuat day a
    cout << "Day vua nhap a: ";//96857
    for (short i = 0; i < n; i++)
        cout << a[i] << "  ";
    // Tong cac phan tu co gia tri le nam o vi tri chan.
    int S = 0;
    for (short i = 0; i < n; i += 2) { // doi chan thanh vi tri le //i=1
        if (a[i] % 2 == 1)//==0
            S += a[i];
    }
    cout << "\nTong cac phan tu co gia tri le nam o vi tri chan: " << S;

}

