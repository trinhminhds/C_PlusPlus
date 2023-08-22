
#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
    
    cout << "Day vua nhap a: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << "  ";


        cout << "\n Cac phan tu cuc dai: ";
        if (a[0] > a[1])
            cout << a[0] << "  ";


        for (short i = 1; i < n - 1;i++) {
            if ((a[i] <a[i - 1]) && (a[i] > a[i + 1]))
                cout << a[i] << "  ";
        }

        if (a[n-1]>a[n-2])
            cout<<a[n-1];
}

