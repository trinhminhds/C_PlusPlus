
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n;
    cout << "Nhap vao n so hang, so cot cua ma tran vuong: ";
    cin >> n;

    cout << "Ma tran vua nhap: ";
    for (short i = 0; i < n; i++){
        for (short j = 0; j < n; j++)
            if (i + j < n)
                cout << (i + j + 1) << " ";
            else
                cout << 2 * n - (i + j + 1) << " ";
        cout << "\n";
    }

}

