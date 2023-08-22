
#include <iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);


int main()
{
    short b[20], m;
    cout << "Nhap day 1 chieu duong\n";
    cout << "Nhap vao so phan tu m: ";
    cin >> m;

    nhapDay(b, m);

    cout << "\nDay vua nhap: ";
    xuatDay(b, m);

    
}
void nhapDay(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
}
void xuatDay(short a[], short n) {
    for (short i = 0; i < n; i++)
        cout << a[i]<<"  ";
}

