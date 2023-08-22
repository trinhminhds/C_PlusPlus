#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap so phan tu n: ";
    cin >> n;


    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }
   
    int chanNho = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            chanNho = min(chanNho, a[i] - 1);
        }
        else
        {
            chanNho = min(chanNho, a[i]);
        }
    }
    cout << "Gia tri chan nho nhat nho hon bat ky gia tri le nao trong chuoi la: " << chanNho << endl;
    return 0;
}