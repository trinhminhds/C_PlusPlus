
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, b[100], m;

    cout << "Nhap vao so phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << " a[" << i << "]=";
        cin >> a[i];

    }
    cout << "Nhap vao so phan tu m :";
    cin >> m;
    for (short i = 0; i < m; i++) {
        cout << "  b[" << i << "]=";
        cin >> b[i];
    }

    cout << "Day so vua nhap a: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "Day so vua nhap b: ";
    for (short i = 0; i < m;i++)
        cout << b[i] << " ";

    cout << "\nPhan tu co trong a ma khong co trong b: ";
    short bay1, bay2;

    for (short i = 0; i < n; i++) {
        bay1 = 1;
        for (short j = 0; j < i;j++)
            if (a[i] == a[j]){
                bay1 = 0;
                break;
             }

            if (bay1) {
                    bay2 = 1;
                        for (short j = 0; j < m; j++)
                            if (a[i] == b[j]) {
                                bay2 = 0;
                                    break;
                            }
                    if (bay2)
                        cout << a[i] << "  ";
            }

    }




}

