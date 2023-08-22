#include <iostream>
using namespace std;

int main() {
    int a[20] ,n;
    float sum = 0;
    int demSo = 0;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
        while ( a[i] > 100 || a[i] < 0)
        {
            cout << "Phai nhap cac so nguyen duong va nho hon 100, xin moi nhap lai ";
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
            demSo++;
        }
    }
    float average = sum / demSo;
    cout << "Gia tri trung binh cong cua cac so chan trong day " << average << endl;
    return 0;
}