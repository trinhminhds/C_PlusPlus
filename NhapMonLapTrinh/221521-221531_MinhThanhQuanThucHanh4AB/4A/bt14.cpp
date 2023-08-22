#include <iostream>


using namespace std;

int main()
{
    int a[20], n, count = 0;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (sqrt(a[i]) == floor(sqrt(a[i]))) {
            count++;
        }
    }
    cout << "Co " << count << " phan tu la so chinh phuong trong day so nguyen"<< endl;


    return 0;
}