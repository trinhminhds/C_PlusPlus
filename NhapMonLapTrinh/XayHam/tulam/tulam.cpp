#include <iostream>
using namespace std;

void nhap(short a[], short n);
void xuat(short a[], short n);
short demAmDuong(short a[], short n);
short demX(short a[], short n,short x);
short nhoHonX(short a[], short n, short x);
short tong(short a[], short n);
short tongChiaHetCho5(short a[], short n);



int main()
{
    short b[20], m, X;
    cout << "Nhap so luong phan tu: ";
    cin >> m;

    nhap(b, m);
    cout << "\nDay vua nhap: ";
    xuat(b, m);

    demAmDuong(b, m);

    cout << "\nNhap so x: ";
    cin >> X;
   demX(b, m, X);
   nhoHonX(b, m, X);

   tong(b, m);
   tongChiaHetCho5(b, m);

}

void nhap(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}


void xuat(short a[], short n) {
    for (short i = 0; i < n; i++)
        cout << a[i] << " ";
}

short demAmDuong(short a[], short n) {
    short demAm = 0;
    short demDuong = 0;
     
    for (short i = 0; i < n; i++)
        if (a[i] > 0)
            demDuong++;
        else
            demAm++;

    cout << "\nCo " << demDuong << " so duong xuat hien trong day";
    cout << "\nCo " << demAm << " so am xuat hien trong day";

    return demDuong, demAm;

}

short demX(short a[], short n, short x) {
    short demSo = 0;
    for (short i = 0; i < n; i++)

        if (a[i] == x)
            demSo++;
       

    cout << "Co " << demSo << " so x xuat hien trong day";
    return demSo;
}

short nhoHonX(short a[], short n, short x) {
    short minX = 0;
    for (short i = 0; i < n; i++)
        if (a[i] < x)
            minX++;

    cout << "\nCo " << minX << " so nho hon x xuat hien trong day";
    return minX;
    
}

short tong(short a[], short n) {
    short tong = 0;
    for (short i = 0; i < n; i += 2)
        if (a[i] % 2 == 1)
            tong += a[i];


    cout << "\nTong gia tri le nam o vi tri chan: " << tong;
    return tong;
}


short tongChiaHetCho5(short a[], short n) {
    short tong = 0;
    for (short i = 0; i < n; i++)
        if (a[i] % 5 == 0)
            tong += a[i];

    cout << "\nTong cac phan tu chia het cho 5: " << tong;
    return tong;
}
