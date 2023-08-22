
#include <iostream>
using namespace std;

short demAmDuong(short a[], short n);


int main()
{
    short b[20],m;
    cout << "Nhap so luong phan tu: " << m;
    cin >> m;

    demAmDuong(b, m);
   
}

short demAmDuong(short a[], short n) {


    short demAm = 0;
    short demDuong = 0;
    for (short i = 0; i < n; i++)
        if (a[i] < 0)
            demAm++;
        else
            demDuong++;

    cout << "Co " << demAm << " am xuat hien trong day";
    cout << "Co " << demDuong << " duong xuat hien trong day";

    return demAm, demDuong;

}