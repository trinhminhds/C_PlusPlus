
#include <iostream>
using namespace std;

int main()
{

    int a[10][10], n;
    cout << "Nhap vao so cot n: ";
    cin >> n;

    for (short i = 0; i < n; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }

    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }


    short soPhanTuNguyenTo = 0;
    short bay;
    float canBacHai;

    for (short i = 0; i < n; i++)
        if (a[i][i] < 2)
            continue;
        else if (a[i][i] == 2)
            soPhanTuNguyenTo++;
        else if (a[i][i] % 2 != 0) {
            bay = 0;
            canBacHai = sqrt(a[i][i]);
            for (short j = 3; j <= canBacHai; j += 2)
                if (a[i][i] % j == 0) {
                    bay = 1;
                    break;
                }
            if (!bay)
                soPhanTuNguyenTo++;

        }

    cout << "\nSo phan tu nguyen to tren duong cheo chinh trong ma tran: " << soPhanTuNguyenTo;

}