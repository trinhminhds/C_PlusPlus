#include <iostream>
    using namespace std;

    int main() {
        int a[20], n;
        cout << "Nhap day cac so nguyen\n";
        cout << "Nhap so phan tu n: ";
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];

            while (a[i] > 20) {
                cout << "Phai nhap vao so nho hon 20, moi ban nhap lai: ";
                cout << "a[" << i << "]=";
                cin >> a[i];
            }
        }

        cout << "Day cac phan tu chan nho hon 20: ";
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0 && a[i] < 20) 
                cout << "a[" << i << "]= " << a[i] << " ";
        }
           
        
        return 0;
    }
