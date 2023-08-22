
#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
            while (a[i] == a[i-1])
            {
                cout << "Phai nhap vao so tang dan, moi nhap lai : ";
                cout << "a[" << i << "]=";
                cin >> a[i];
            }
        
    }

    cout << "Day so : ";
    for (short i = 0; i < n; i++)
        cout << a[i] << "  ";



}