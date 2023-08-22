#include<iostream>
using namespace std;

int main() {

    int a[20], b[20] ,n, m, p;
    //a[]
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap vao gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    //b[]
    cout << "Nhap so luong phan tu m: ";
    cin >> m;
    for (short i = 0; i < m; i++) {
        cout << "Nhap vao gia tri b[" << i << "]= ";
        cin >> b[i];
    }
    //p
    cout << "Nhap phan tu bat dau chen day b vao day a: ";
    cin >> p;

    for (short i = n - 1; i >= p - 1; i--) {
        a[i + m] = a[i];
    }
    for (short i = 0; i < m; i++) {
        a[p + i] = b[i];//-1
    }

    cout << "Day sau khi chen: ";
    for (short i = 0; i < n + m; i++) {
        cout << a[i] << " ";
    }
}


