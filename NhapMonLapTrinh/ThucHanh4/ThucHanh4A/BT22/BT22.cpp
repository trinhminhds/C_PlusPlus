
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

        while (a[i]>0)
        {
            cout << "Phai nhap cac phan tu am, xin moi nhap lai ";
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
        }
    }

    int min = a[0] = 0, vTMin = 0;
    for (short i = 0; i < n; i++)
        if (a[i] < min)
        {
            min = a[i];
            vTMin = i;
        }
    cout << "Vi tri cua phan tu am lon nhat trong day cac so nguyen a[" << vTMin << "]";

}


