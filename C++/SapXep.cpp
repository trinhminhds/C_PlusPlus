#include <iostream>
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void hoanvi(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
}

int main()
{

    int b[20], m;
    cout << "nhap : ";
    cin >> m;
    nhap(b, m);

    hoanvi(b, m);
    xuat(b, m);
}
