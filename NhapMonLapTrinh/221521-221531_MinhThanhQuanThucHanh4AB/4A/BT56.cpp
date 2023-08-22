
#include <iostream>
using namespace std;

int main()
{
    int a[20], n, k;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;

    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];

    }

    //Trung Binh cong
    float sum = 0;
    int demSo = 0;
    for (short i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum += a[i];
            demSo++;
        }

    }
    float average = sum / demSo;
    cout << "\nGia tri trung binh cong cua cac so am trong day " << average;

    
    if (average == k)
        cout << "\nk bang gia tri trung binh ";
    else if (average < k)
        cout << "\nk co gia tri lon hon gia tri trung binh cong ";
    else
        cout << "\nk co gia tri nho hon gia tri trung binh cong ";
    
        
}



//1:41 PM 4/16/2023 da test xong