
#include <iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
short Max(short a[], short n);
short DuongMin(short a[], short n);
short MaxAm(short a[], short n);
short Chenx(short a[], short n);

int main()
{
    short b[20], m;
    cout << "Nhap vao so phan tu m: ";
    cin >> m;
    nhapDay(b, m);
    cout << "\nDay vua nhap: ";
    xuatDay(b, m);
   

    short soLonNhat = Max(b, m);
    cout << "\n\nPhan tu lon nhat: "<<soLonNhat;
    
    short soMinDuong = DuongMin(b, m);
    if (soMinDuong < 0)
    cout << "\n\nKhong ton tai so duong ";
    else
        cout << "\nSo duong nho nhat la: " << soMinDuong;

    short soAmMax = MaxAm(b, m);
    if (soAmMax == 0)
        cout << "\n\nSo am lon nhat day la: Khong ton tai";
    else
        cout << "\n So am lon nhat day la: " << soAmMax;

    Chenx(b, m);
    cout << "\n\nDay so sau khi chen x: ";
    
}

void nhapDay(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}

void xuatDay(short a[], short n) {
    for (short i = 0; i < n; i++)
        cout << a[i]<<" ";
}
//Ham tim gia tri lon nhat
short Max(short a[], short n) {
   
    short max = a[0];
    short i;
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
         
    }
    return max;
    
}
//Tim phan tu duong nhor nhat
short DuongMin(short a[], short n) {
    short duong,i;
    short bay = 0;
    for (i = 0; i < n; i++)
        if (a[i] > 0) {
            duong = a[i];
            bay = 1;
            break;
        }
    if (bay) {
        for (++i; i < n; i++)
            if (a[i] > 0 && a[i] < duong)
                duong = a[i];
        return duong;
    }
    return 0;

}
//Tim phan tu am lon nhat
short MaxAm(short a[], short n) {
    short max, i;
    short bay = 0;
    for (i=0;i<n;i++)
        if (a[i] < 0) {
            max = a[i];
            bay = 1;
            break;

        }
    if (bay) {
        for (++i; i < n; i++)
            if (a[i]<0 && a[i]>max)
                max = a[i];
        return max;
    }

    return 0;
           
}

//Chen x vao sau cac phan tu lon hon x 
short Chenx(short a[], short n) {
    short x, i;
    cout << "\n\nNhap phan tu x: ";
    cin >> x;
   
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (a[i] > x)
        {
            cout << x <<" ";
        }
    }
    return 0;


  

}



//11:19 AM 4/19/2023 Da test xong.
