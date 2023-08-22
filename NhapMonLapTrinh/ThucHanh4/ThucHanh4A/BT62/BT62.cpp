
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
void sapXep(int a[], int n);
void in(int a[], int n,int x);
void kiemTra(int a[], int n,int x);
void timViTriChen(int a[], int n);

int main()
{
    int a[20],n,x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    cout << "Nhap x";
    cin >> x;

}
void nhap(int a[], int n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    cout << "Day vua nhap: ";
    for (short i = 0; i < n; i++)
        cout << a[i] << " ";
}

void sapXep(int a[], int n) {
    int tam;
    for (short i = 0; i < n - 1; i++)
        for (short j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;

            }
}

void in(int a[], int n,int x) {

    unordered_map<int, int> mp;
    for (short i = 0; i < n; i++)
        mp[a[i]]++;
    int max_freq = 0, max_num = 0;
    for (auto x : mp)
    {
        if (x.second > max_freq)
        {
            max_freq = x.second;
            max_num = x.first;
        }
    }
}
    void kiemTra(int a[], int n, int x){
        
        int d = 0;
        for (short i = 0; i < n; i++)
        {
            if (a[i] == x)
                d++;
        }
        if (d = 0)
            cout << "Phan tu  " << x << " khong xuat trong day";
        else
            cout << "Phan tu " << x << " xuat hien trong day " << d <<" lan";



    }
    void timViTriChen(int a[], int n) {

    }


    // chua xong
