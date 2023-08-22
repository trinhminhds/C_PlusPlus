#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a[20], n;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;

    //Nhap day
    for (short i = 0; i < n; i++) {
        cout << "     a[" << i << "]=";
        cin >> a[i];
    }

    //Xuat day a
    cout << "Day vua nhap a: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << " ";

    int maxChan = INT_MIN;
    int minLe = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] > maxChan) {
            maxChan = a[i];
        }
        if (a[i] % 2 == 1 && a[i] < minLe) {
            minLe = a[i];
        }
    }

    if (maxChan == INT_MIN) {
        cout << "Khong co so chan trong day\n";
    }
    else {
        cout << "So chan lon nhat trong day la: " << maxChan;
    }

    if (minLe == INT_MAX) {
        cout << "\nKhong co so le trong day \n";
    }
    else {
        cout << "\nSo le nho nhat trong day la: " << minLe;
    }

   
}
