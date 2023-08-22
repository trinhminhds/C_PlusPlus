#include <iostream>
using namespace std;

int main()
{
    int a[20],n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    for (short i = 0; i < n; i++) {
        cout << "Nhap gia tri a[" << i << "]= ";
        cin >> a[i];
    }

    int max = a[0], min = a[0];
    int MAX = 0, MIN = 0;
    //doi vi tri
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            MAX = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            MIN = i;
        }
    }

    swap(a[MAX], a[MIN]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}