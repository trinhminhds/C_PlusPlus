
#include <iostream>
using namespace std;

void nhap(short a[], short n);
void xuat(short a[], short n);
short nhoNhat(short a[], short n);
short duongNhoNhat(short a[], short n);
short tongDuongViTriChan(short a[], short n);
void tachChanLe(short a[], short n,short b[],short& m,short c[],short& k );
short chenX(short a[],short n,short k ,short x);
short demDuongChan(short a[], short n);
short timPtLonNhat(short a[], short n);
short demSoLanXuatHien(short a[], short n,short X);


int main()
{
    short b[20], m;
    cout << "Nhap vao so luong phan tu: ";
    cin >> m;

    nhap(b, m);
    cout << "Day vua nhap: ";
    xuat(b, m);

    nhoNhat(b, m);
    short mind = duongNhoNhat(b, m);
    if (mind > 0)
        cout << "\nPhan tu duong nho nhat: " << mind;
    else
        cout << "\nKhong co so phan tu duong";
    tongDuongViTriChan(b, m);

    short dayChan[20], dayLe[20];
    short phanTuDayChan = 0 , phanTuDayLe = 0;
    tachChanLe(b, m, dayChan, phanTuDayChan, dayLe, phanTuDayLe);
    cout << "\nDay chan: ";
    xuat(dayChan, phanTuDayChan);
    cout << "\nDay le: ";
    xuat(dayLe, phanTuDayLe);

    short x = 10, k = 3;
    short chen;
    chen = chenX(b, m, k, x);
    if (chen == -1)
        cout << "\nChen that bai";
    else
        cout << "\nKet qua chen: ";
    xuat(b, m + 1);

    demDuongChan(b, m);
    timPtLonNhat(b, m);

    short X;
    cout << "\nNhap vao phan tu x: ";
    cin >> X;
    demSoLanXuatHien(b, m, X);
    
   
    

}

void nhap(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}
void xuat(short a[], short n) {
    for (short i = 0; i < n; i++)
        cout << a[i] <<" ";
}


short nhoNhat(short a[], short n) {
   short min = a[0];
   for (short i = 0; i < n; i++)
       if (a[i] < min)
           min = a[i];


   cout << "\nPhan tu nho nhat: " << min;
   return min;
}
short duongNhoNhat(short a[], short n) {
    short mind = a[0], bay = 0;
    for (short i = 0; i < n; i++)
        if (a[i] > 0) {
            bay = 1;
            break;
        }
    if (bay)
        for (short i = 0; i < n; i++)
            if (a[i] > 0 && a[i] < mind)
                mind = a[i];


    
    return mind;
    
}

short tongDuongViTriChan(short a[], short n) {
    short tong = 0;
    for (short i = 0; i < n; i += 2)
        if (a[i] > 0)
            tong += a[i];
    cout << "\nTong phan tu duong o vi tri chan: " << tong;
    return tong;
}

void tachChanLe(short a[], short n, short b[], short& m, short c[], short& k) {
    m = k = 0;
    for (short i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            b[m++] = a[i];
        else
            c[k++] = a[i];
}

short chenX(short a[], short n, short k, short x) {
    if (k < 0 || k > n - 1)
        return -1;
    for (short i = n; i > k; i--)
        a[i] = a[i - 1];
        a[k] = x;
    return 1;

}

short demDuongChan(short a[], short n) {
    short dem = 0;
    for (short i = 0; i < n; i++)
        if (a[i] > 0 && a[i] % 2 == 0)
            dem ++; 

    cout << "\nPhan tu duong chan xuat hien " << dem << " lan";
    return dem;
}

short timPtLonNhat(short a[], short n) {
    short max = a[0], viTri = 0;
    short i;
    for ( i = 0; i < n; i++)
        if (a[i] > max) {
            max = i;
            viTri = max;
        }
           

    cout << "\nPhan tu lon nhat o vi tri: " << viTri;
    return viTri;

}
short demSoLanXuatHien(short a[], short n,short X) {
    short dem = 0;
    for (short i = 0; i < n; i++)
        if (a[i] == X)
            dem++;

    cout << "Co " << dem << " lan x xuat hien trong day";
    return dem;
} 

