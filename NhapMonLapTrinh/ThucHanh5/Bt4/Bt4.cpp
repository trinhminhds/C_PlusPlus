
#include <iostream>
using namespace std;

void nhap(int a[10][10], int n, int m);
void xuat(int a[10][10], int n, int m);
short tichNgich(int a[10][10], int n, int m);
short maxChinh(int a[10][10], int n, int m);
short tongTren(int a[10][10], int n, int m);
void hoanVi(int& x, int& y);
void sapXep(int a[10][10], int n, int m);





int main()
{
    int b[10][10], k, l;
    cout << "Nhap so hang cua ma tran: ";
    cin >> k;
    cout << "Nhap so cot cua ma tran: ";
    cin >> l;

    nhap(b, k, l);
    cout << "\nMa tran vua nhap: \n";
    xuat(b, k, l);

    short tich1 = tichNgich(b, k, l);
    cout << "\nTich cac phan tu tren duong cheo nghich: " << tich1;

    short Max1 = maxChinh(b, k, l);
    cout << "\n\nGia tri lon nhat tren duong cheo chinh: " << Max1;

    short Tong = tongTren(b, k, l);
    cout << "\n\nTong cac phan tu tam giac tren: " << Tong ;
    
    sapXep(b, k, l);
    

   
    
}
void nhap(int a[10][10], int n, int m) {
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

}
void xuat(int a[10][10], int n, int m) {

    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }
}

//Tich cac phan tu tren duong cheo nghich
short tichNgich(int a[10][10], int n, int m) {
    short tich = 1;
    for (short i = 0; i < n; i++) {
            tich *= a[i][n - 1 - i];
        

    }
    return tich;
}
//Gia tri lon nhat tren duong cheo chinh
short maxChinh(int a[10][10], int n, int m) {

    short  max = a[0][0];
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++)
            if (i == j && max < a[i][i]) {
                max = a[i][i];
            }

    }
    return max;

}
//Tong cac phan tu tam giac tren
short tongTren(int a[10][10], int n, int m) {
    short tong = 0;
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++) {
            if (i <= j)
                tong += a[i][j];


        }
    return tong;
}

//Hoan vi gia tri lon nhat o hang vao duong cheo chinh
void hoanVi(int& x, int& y)
{
    int tam = x;
    x = y;
    y = tam;
}


//Tim gia tri lon nhat va hoan vi 
void sapXep(int a[10][10], int n, int m) {
   
    short max = a[0][0], soMax;
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                soMax = j;
                
            }
            
        }
        hoanVi(a[i][soMax], a[i][i]);
        max = a[i][soMax];
    }
    

    cout << "\n\nMa tran sau khi sap xep la: \n";
    xuat(a, n, m);
}


//11:18 AM 4/19/2023 Da Test xong.

