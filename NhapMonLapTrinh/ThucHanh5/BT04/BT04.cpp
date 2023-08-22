
#include <iostream>
using namespace std;
void nhap(int a[10][10],int n,int m);
void xuat(int a[10][10], int n, int m);
short tichNgich(int a[10][10], int n, int m);
int main()
{
    int b[10][10],k,l;
    cout << "Nhap so hang cua ma tran: ";
    cin >> k;
    cout << "Nhap so cot cua ma tran: ";
    cin >> l;

    nhap(b, k, l);

    cout << "\nMa tran vua nhap: \n";
    xuat(b, k, l);
    
   short tich1 = tichNgich(b, k, l);
    cout << "Tich cac phan tu tren duong cheo nghich: "<< tich1;

    
}
void nhap(int a[10][10], int n, int m){
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

short tichNgich(int a[10][10], int n, int m) {
    
    for (short i = 0; i < n; i++) {
        short tich = 0;
        for (short j = 0; j < m; j++)
            if (a[j][j]) {
                tich = a[i][j] * a[i][j] * a[i][j];
            }


        return tich;
    }
    
}


