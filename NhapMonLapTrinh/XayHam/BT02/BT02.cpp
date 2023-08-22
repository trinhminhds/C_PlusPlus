
#include <iostream>
using namespace std;

void nhap(short a[10][10], short m, short n);
void xuat(short a[10][10], short m, short n);
short demDuongChan(short a[10][10], short m, short n);
short min(short a[10][10], short m, short n);
short minDuong(short a[10][10], short m, short n);
short maxTrenHangi(short a[10][10], short m, short n);

int main()
{
    short b[10][10], x, y;
    cout << "Nhap so hang cua ma tran: ";
    cin >> x;
    cout << "Nhap so cot cua ma tran: ";
    cin >> y;

    nhap(b, x, y);
    cout << "\nMa tran vua nhap: \n";
    xuat(b, x, y);

    demDuongChan(b, x, y);
    min(b, x, y);


    short nhoDuong = minDuong(b, x, y);
    if (nhoDuong < 0)
        cout << "\nKhong co phan tu duong nho nhat";
    else
        cout << "\nPhan tu duong nho nhat: " << nhoDuong;

    maxTrenHangi(b, x, y);

    
}

void nhap(short a[10][10], short m, short n) {
    for (short i = 0; i < m; i++) 
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    
}

void xuat(short a[10][10], short m, short n) {
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }
}

short demDuongChan(short a[10][10], short m, short n) {
    short dem = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] > 0 && a[i][j] % 2 == 0)
                dem++;

    cout << "Co " << dem << " phan tu duong chan";
    return dem;
}


short min(short a[10][10], short m, short n) {
    short min = a[0][0];
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] < min)
                min = a[i][j];

    cout << "\nPhan tu nho nhat: " << min;
    return min;

}

short minDuong(short a[10][10], short m, short n) {
    short bay = 0;
    short min = a[0][0];
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] > 0) {
                bay = 1;
                break;
            }
    if (bay)
        for (short i = 0; i < m; i++)
            for (short j = 0; j < n; j++)
                if (a[i][j] > 0 && a[i][j] < min)
                    min = a[i][j];

    return min;

                     
}
short maxTrenHangi(short a[10][10], short m, short n) {
    short max = a[0][0];
    short vitri = 0;
    for (short i = 0; i < m; i++) 
        for (short j = 0; j < n; j++)
            if (a[i][j] > max) {
                max = a[i][j];
                vitri = i;
            }
    

    cout << "\nVi tri lon nhat tren hang thu: " << vitri;
    return vitri;
}


