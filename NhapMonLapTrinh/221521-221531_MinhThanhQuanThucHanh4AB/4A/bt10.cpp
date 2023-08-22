
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

    short phanTuAm = 0, phanTuDuong = 0;

    for (short i = 0; i < n; i++) {
        if (a[i] > 0) 
            phanTuDuong++;
        else 
            phanTuAm++;

    }
    cout << "Day vua nhap: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << "  ";
    cout << "\nDay tren co " << phanTuDuong << " phan tu la duong";
    cout << "\nDay tren co " << phanTuAm << " phan tu la am";



    
}
