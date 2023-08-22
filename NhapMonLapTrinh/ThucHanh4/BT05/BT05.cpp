
#include <iostream>
using namespace std;

int main()
{
    double a[20], n;
    cout << "Nhap xuat day 1 chieu duong\n";
    cout << "Nhap vao so phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << " a[" << i << "]=";
        cin >> a[i];
    }
    //Xuat day
    cout << "Xuat phan tu am: ";
    for (short i = 0; i < n; i++)
        if (a[i] < 0)
            cout << a[i] << "   ";

    //Tim phan tu am Lon nhat
    double maxPtAm;
    short bay = 0;
    for(short i=0;i<n;i++)
        if (a[i] < 0) {
            maxPtAm = a[i];//tim phan tu am dau tien
            bay = 1;
            break;
        }

    if (bay) {
        for (short i = 0; i < n; i++)
            if (a[i]<0 && a[i]>maxPtAm)
                maxPtAm = a[i];
        cout << "\nPhan tu am lon nhat" << maxPtAm;
    }
    else
        cout << "\nKhong co phan tu am trong day tren";


}

