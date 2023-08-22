#include <iostream>

using namespace std;

int main() {
    int a[20], n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }

    int max = a[0] = 0, vTMax = 0 ;
    for (short i = 0; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
            vTMax = i;
        }
    cout << "Vi tri cua phan tu lon nhat trong day cac so nguyen a[" << vTMax << "]";
   
}