
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

    int min = a[0] = 0, vTMin = 0;
    for (short i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            if (a[i] > min)
            {
                min = a[i];
                vTMin = i;
            }
            
            
        }
    cout << "Vi tri cua phan tu le lon nhat trong day a[" << vTMin << "]";

}



