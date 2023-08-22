#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[20], n, sum = 0;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;

    //Nhap day
    for (int i = 0; i < n; i++) {
        cout << "     a[" << i << "]=";
        cin >> a[i];
    }

    //Xuat day a
    cout << "Day vua nhap a: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    //Tim cac phan tu cuc tieu va tinh tong
    cout << "\nCac phan tu cuc tieu: ";
    for (int i = 0; i < n; i++) {
        if (i == 0 && a[i] < a[i + 1]) {
            cout << a[i] << " ";
            sum += a[i];
        }
        else if (i == n - 1 && a[i] < a[i - 1]) {
            cout << a[i] << " ";
            sum += a[i];
        }
        else if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
            cout << a[i] << " ";
            sum += a[i];
        }
    }
    cout << "\nTong cac phan tu cuc tieu: " << sum;

   
}
