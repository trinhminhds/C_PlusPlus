
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ve hinh vuong\n";
    cout << "Nhap do dai cua canh: ";
    cin >> n;
   
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << ("* ");
            }
            else {
                cout << ("  ");
            }
        }
        cout << ("\n");
    }
}