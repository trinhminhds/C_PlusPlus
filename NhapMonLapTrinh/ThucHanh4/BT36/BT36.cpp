
#include <iostream>
using namespace std;

int main()
{
    int a[20], n, tam;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    // Sap xep day so co phan tu gia tri le tang dan
    for (short i = 0; i < n - 1; i++) {
        for (short j = i + 1; j < n; j++)
            if (a[i] % 2 == 1 && a[j] % 2 == 1 && a[i] > a[j]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;

            }
    }
    // xuat 
    cout << "\nDay co phan tu gia tri le tang dan: " ;
    for (short i = 0; i < n; i++)
        cout << a[i] << "  ";

}

