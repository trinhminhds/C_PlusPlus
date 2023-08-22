
#include <iostream>
using namespace std;

int main()
{
    int a[20], n,S;
    cout << " Nhap vao so phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]=";
        cin >> a[i];

    }
    S = 0;
    for (short i = 0; i < n; i++)
        S += a[i];
    cout << "Trung binh cong cau day so: " << (float)S / n;
    

}

