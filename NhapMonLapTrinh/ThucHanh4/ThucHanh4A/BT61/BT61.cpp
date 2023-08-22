#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }

    int bay = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            bay = 1;
            break;
        }
    }
    if (bay == 1) {
        cout << "  0\n";
    }
    else {
        cout << "  1\n";
    }


    int b[20], m, demSo = 0, j;
    cout << "Nhap so luong phan tu m: ";
    cin >> m;
    for (short i = 0; i < m; i++) {
        cout << "b[" << i << "]= ";
        cin >> b[i];
    }

    for (short i = 0; i <= n - m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i + j] != b[j])
                break;
        }
        if (j == m)
            demSo++;
    }

    cout << "\nb xuat hien trong a " << demSo << " lan.\n";

    return 0;
}

