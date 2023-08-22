#include <iostream>
using namespace std;

int main()
{
    int a[20], m, p, n;
    cout << "Nhap so luong phan tu n: ";
    cin >> m;
   
    for (short i = 0; i < m; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }

    cout << "\nNhap vao vi tri bat dau xoa: ";
    cin >> p;

    cout << "\nNhap vao so luong phan tu can xoa: ";
    cin >> n;
  
    for (short i = p - 1; i < m - n; i++)
        a[i] = a[i + n];
    m -= n;

    cout << "\nDay so sau khi xoa: ";
    for (short i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    return 0;
}