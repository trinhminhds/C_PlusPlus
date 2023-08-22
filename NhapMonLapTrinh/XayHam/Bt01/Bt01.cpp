
#include <iostream>
using namespace std;

void nhap(short a[], short n);
void xuat(short a[], short n);
short lonNhat(short a[], short n);
short duongNhoNhat(short a[], short n);
short tongDuongViTriChan(short a[], short n);
void tach(short a[], short n,short b[],short &m,short c[],short &k);


int main()
{
    short b[20], m;
    cout << "Nhap so luong phan tu: ";
    cin >> m;

    nhap(b, m);
    cout << "\nDay vua nhap: ";
    xuat(b, m);

    lonNhat(b, m);
    duongNhoNhat(b, m);
    tongDuongViTriChan(b, m);

    short dayViTriChan[20], dayViTriLe[20];
    short soLuongPTViTriChan, soLuongPTViTriLe;
    tach(b, m, dayViTriChan, soLuongPTViTriChan, dayViTriLe, soLuongPTViTriLe);

    cout << "\nDay vi tri chan: ";
    xuat(dayViTriChan, soLuongPTViTriChan);

    cout << "\nDay vi tri le: ";
    xuat(dayViTriLe, soLuongPTViTriLe);

    
}

void nhap(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}


void xuat(short a[], short n) {
    for (short i = 0; i < n; i++)
        cout << a[i]<< " ";
}


short lonNhat(short a[], short n){
    short Min = a[0];

    for (short i = 0; i < n; i++)
        if (a[i] < Min)
            Min = a[i];
            
    cout << "\nPhan tu nho nhat: " << Min;
    return Min;

}

short duongNhoNhat(short a[], short n) {
    int bay = 0;
    short min = a[0];

    for (short i = 0; i < n; i++)
        if (a[i] > 0) {

            bay = 1;
            break;
        }
    if (bay)
        for (short i = 0; i < n; i++)
            if (a[i] > 0 && a[i] < min)
                min = a[i];



    cout << "\nPhan tu duong nho nhat: " << min;
    return min;

}

short tongDuongViTriChan(short a[], short n) {
    short tong = 0;

    for (short i = 0; i < n; i += 2)
        if (a[i] > 0)
        tong += a[i];
   
    cout << "\nTong cac phan tu duong tai vi tri chan: " << tong;
    return tong;
     
        
}

void tach(short a[], short n, short b[], short &m, short c[], short &k) {
    m = k = 0;
    for (short i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            b[m++] = a[i];
        else
            c[k++] = a[i];


}