
#include <iostream>
using namespace std;

int main()
{
    short m = 3, n = 4;
    short a[3][4] = { {8,7,6,5},{12,11,10,9},{1,2,3,4} };

    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }
    //tim vi tri hang co vi tri lon nhat
    short tongHang, tongHangMax, viTriHangMax;
    tongHangMax = 0;
    viTriHangMax = 0;
    for (short j = 0; j < n; j++)//chi dinh hang 0 co gia tri tong lon nhat
        tongHangMax += a[0][j];

    for (short i = 1; i < m; i++) {
        tongHang = 0;
        for (short j = 1; j < m; j++)
            tongHang += a[i][j];
        if (tongHang > tongHangMax) {
            tongHangMax = tongHang;
            viTriHangMax = i;
        }

    }
    //Xoa hang co tong lon nhat
        if (viTriHangMax != m - 1)// neu vi tri hang lon nhat la hang cuoi cung thi khong
            for (short i = viTriHangMax; i < m; i++)
                for (short j = 0; j < n; j++)
                    a[i][j] = a[i + 1][j];
        m--;//Giam bot 1 hang



        cout << "\n\nHang co tong lon nhat la hang thu: " << viTriHangMax;
        cout << "\nMa tran da xao 1 dong:\n";
        for (short i = 0; i < m; i++) {
            for (short j = 0; j < n; j++)
                cout << a[i][j] << " ";
                cout << "\n";
        }
       

    
}

