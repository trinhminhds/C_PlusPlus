#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, m;
    cout << "Nhap so hang n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;

    //Nhap ma tran a[n][m]
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++) {
            cout << "a[" << i << "]= ";
            cin >> a[i][j];
        }

    //Xuat ma tran a[n][m]
    cout << "Ma tran vua nhap:\n";
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    int b[10][10], y, z;
    cout << "Nhap so hang n: ";
    cin >> y;
    cout << "Nhap so cot m: ";
    cin >> z;

    //Nhap ma tran b[n][m]
    for (short q = 0; q < y; q++)
        for (short w = 0; w < z; w++) {
            cout << "b[" << q << "]= ";
            cin >> b[q][w];
        }

    //Xuat ma tran b[n][m]
    cout << "Ma tran vua nhap:\n";
    for (short q = 0; q < y; q++) {
        for (short w = 0; w < z; w++)
            cout << b[q][w] << " ";
        cout << "\n";
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (short q = 0; q < y; q++) {
                for (short w = 0; w < z; w++) {
                    if (a[i][j] == b[q][w]) {
                        b[q][w] = a[i][j];
                    }
                }
            }
        }
    }

    cout << "\nCommon elements between two matrices are: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (short q = 0; q < y; q++) {
                for (short w = 0; w < z; w++) {
                    if (b[q][w] != 0) {
                        cout << b[q][w] << " ";
                    }
                }
            }
        }
    }



    return 0;
}