
#include <iostream>
using namespace std;

int main()
{
	int a[20], n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];

        while (a[i] < 0)
        {
            cout << "Phai nhap cac phan tu duong, xin moi nhap lai ";
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
        }
    }

    cout << "Vi tri cua phan tu chan cuoi cung cua day ";
    for (short i = n-1; i >= 0; i--) {
        if (a[i] % 2 == 0)
        {
            cout << "a[" << i << "]";
            
        }
        return -1;
    }

}

