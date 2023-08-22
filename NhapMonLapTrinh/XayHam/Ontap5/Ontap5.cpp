
#include <iostream>
using namespace std;

void input(short a[][10], short m, short n);
void output(short a[][10], short m, short n);
short demDuong(short a[][10], short m, short n);
short nhoNhat(short a[][10], short m, short n);
short duongNhoNhat(short a[][10], short m, short n);


int main()
{
    short b[10][10], m, n;
    cout << "Nhap so hang ma tran: ";
    cin >> m;
    cout << "Nhap so cot ma tran: ";
    cin >> n;

    input(b, m, n);
    cout << "Ma tran vua nhap: \n";
    output(b, m, n);
    demDuong(b, m, n);
    nhoNhat(b, m, n);
    duongNhoNhat(b, m, n);
}

void input(short a[][10], short m, short n) {
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
}

void output(short a[][10], short m, short n) {
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}

short demDuong(short a[][10], short m, short n) {
    short dem = 0, bay = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] > 0 && a[i][j] % 2 == 0)
                dem++;

    cout << "Co " << dem << " so duong chan trong ma tran";
    return dem;

}

short nhoNhat(short a[][10], short m, short n) {
    short min = a[0][0];
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] < min)
                min = a[i][j];

    cout << "\nPhan tu nho nhat: "<< min;
    return min;
}

short duongNhoNhat(short a[][10], short m, short n) {
    short bay = 0, mins = a[0][0];
    for(short i=0;i<m;i++)
        for(short j=0;j<n;j++)
            if (a[i][j] > 0) {
                bay = 1;
                break;
            }
    if (bay)
        for (short i = 0; i < m; i++)
            for (short j = 0; j < n; j++)
                if (a[i][j] > 0 && a[i][j] < mins)
                    mins = a[i][j];

    cout << "\nPhan tu duong nho nhat:" << mins;
    return mins;
}
