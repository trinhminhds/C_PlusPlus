
#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << " Nhap vao so phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]=";
        cin >> a[i];

    }
    cout << "Day so dao nguoc: ";
    for (short i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
}

