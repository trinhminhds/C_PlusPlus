
#include <iostream>
using namespace std;

int main()
{

    double M, ls;
    int n;
    cout << "Nhap so tien ban dau M: ";
    cin >> M;
    cout << "Nhap muc lai suat thang ls: ";
    cin >> ls;
    cout << "Nhap so thang n: ";
    cin >> n;

    double tongTien = M * pow(1 + ls, n);

    cout << "So tien rut duoc sau " << n << " thang la: " << tongTien << endl;

 
}

IDE VS2019
