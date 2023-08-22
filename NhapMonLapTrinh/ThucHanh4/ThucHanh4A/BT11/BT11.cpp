
#include <iostream>
using namespace std;

int main()
{
    int a[20], n, x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    short demSo = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {

            demSo++;
        }
    }

    cout << "Co " << demSo << " xuat hien phan tu " << x << endl;

}


