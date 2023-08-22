#include <iostream>
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
// Xoa phan tu cua mang tai vi tri bat ky
void Xoa(int a[], int& n, int vitri);
// Xoa cac phan tu trung nhau
void Xoa_Trung(int a[], int& n);

int main() {
    int a[20], n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    Xoa_Trung(a, n);
    cout << n << endl;
    cout << "Day sau khi xoa: ";
    for (short i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

    void nhap(int a[], int n){

        for (short i = 0; i < n; i++) {
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
        }
    }
    
    void xuat(int a[], int n) {
        cout << "Day vua nhap: ";
        for (short i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }

    // Xoa phan tu cua mang tai vi tri bat ky
    void Xoa(int a[], int& n, int vitri) {
        for (short i = vitri + 1; i < n; i++) {
            a[i - 1] = a[i];
        }
        n--;
    }

    // Xoa cac phan tu trung nhau
    void Xoa_Trung(int a[], int& n) {
        for (short i = 0; i < n - 1; i++) {
            for (short j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    Xoa(a, n, j);
                    i--;
                }
            }
        }
    }

    // chua sap xep tang dan

      