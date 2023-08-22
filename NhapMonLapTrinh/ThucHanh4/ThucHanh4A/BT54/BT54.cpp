#include<iostream>
using namespace std;

int main() {


    int a[20], n, X;
    cout << "Nhap xuat day 1 chieu duong\n";
    cout << "Nhap vao so phan tu n: ";
    cin >> n;
    cout << "Nhap X: ";
    cin >> X;

    //Nhap
    for (short i = 0; i < n; i++) {
        cout << " a[" << i << "]=";
        cin >> a[i];
    }


    //doi vi tri tang dan
    int tam;
    for (short i = 0; i < n; i++) {
        for (short j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {

                tam = a[i];
                a[i] = a[j];
                a[j] = tam;

            }
        }
    }
    cout << "\nDay tang dan: ";
    for (short i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    short viTriMax;
    int max = a[0];
    viTriMax = 0;

    //tim vi tri phan tu lon nhat
    for (short i = 1; i < n; i++) {
        if (max < a[i]) {// chua cai tien, chi xet vi tri
            max = a[i];
            viTriMax = i;
        }
        //Chen X vao sau 
        for (short i = n; i > viTriMax + 1; i--)
            a[i] = a[i - 1];
        a[viTriMax + 1] = X;
    }
    // xuat day so khi thay phan tu max
    cout << "\nDay sau khi chen phan tu x: ";
    for (short i = 0; i < n + 1; i++)
        cout << a[i] << "  ";


}

//8:46 PM 4/15/2023 sua gan xong



