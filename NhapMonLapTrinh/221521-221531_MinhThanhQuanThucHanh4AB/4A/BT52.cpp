#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }

    int tang = true, giam = true;
    for (short i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            giam = false;
        else if (a[i] < a[i - 1])
            tang = false;
    }

    if (tang)
        cout << "Day so Tang.\n";
    else if (giam)
        cout << "Day so Giam.\n";
    else
        cout << "Day so Khong tang cung khong giam.\n";


    return 0;
}