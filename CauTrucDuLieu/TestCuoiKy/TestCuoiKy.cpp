
#include <iostream>
using namespace std;

//float gthua(int n) {
//
//    if (n == 0)
//        return 1;
//    else
//        return n*gthua(n-1);
//}

void nhap(int a[],int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void Insersort(int a[], int n) {
    int tam = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}

int lt(int n) {

    if (n == 0) {
        return 1;
    }
    else {
        return (2 * lt(n - 1));
    }
}

//void BinarySearching(int a[], int n, int x)
//{
//    int l = 0, r = n - 1, mid, Kt = 0;
//
//    while (l <= r) {
//
//        mid = (l + r) / 2;
//
//        if (a[mid] < x) {
//            l = mid + 1;
//        }
//    
//        else if (a[mid] > x) {
//            r = mid - 1;
//        }
//        else {
//            Kt = 1;
//            break;
//        }
//
//    }
//
//    if (Kt == 1) 
//        cout << "Tim thay x trong day";
//    else
//        cout << "Khong tim thay x trong day";
//
//}

bool binarySearch(int a[], int l, int r, int x) {
    
    if (l > r) {
        return true;
    }

    int m = (l + r) / 2;

    if (a[m] == x) {
        return true;
    }
    else if (a[m] < x) {
        return binarySearch(a, m + 1, r, x);
    }
    else {
        return binarySearch(a, m - 1, l, x);
    }
}



int TimKiem(int M[], int N, int X)
{
    int k = 0;
    M[N] = X;
    while (M[k] != X)
        k++;
    if (k < N)
        return (k);
    return (-1);
}

void BubbleSort(int M[], int N)
{
     int Temp;
     for (int I = 0; I < N - 1; I++)
         for (int J = N-1; J > I; J--)
         if (M[J] < M[J - 1])
         {
         Temp = M[J];
         M[J] = M[J - 1];
         M[J - 1] = Temp;
         }

     return;
    
}

int FindX(int a[], int n, int x)
{
    int i;
    for (i = n; i >= 1; i--) if (a[i] == x) return (i);
    return (-1);
}


void ToHopKe(int a[], int n, int k) {

    int i, j, tmp = 0;

    for (i = 1; i <= k; i++)

        if (a[i] != n - k + i) {

            tmp = 1;

            break;

        }

    if (tmp == 0) return;

    i = k;

    while (a[i] >= n - k + i)

        i--;

    a[i] = a[i] + 1;

    for (j = i + 1; j <= k; j++) a[j] = a[i] + j - i;

    for (i = 1; i <= n; i++) printf("%d ", a[i]);

}

void HoanViKe(int a[], int n) {

    int i, k, r, s, tmp = 0;

    for (i = 1; i <= n; i++) {
        if (a[i] != n - i + 1) {
            tmp = 1; break;
        }

        if (tmp == 0) {
            return;
            i = n - 1;
        }


        while (a[i] > a[i + 1]) 
            i = i - 1;

        k = n;

        while (a[k] < a[i]) k = k - 1;

        tmp = a[i]; a[i] = a[k]; a[k] = tmp;

        r = i + 1; s = n;

        while (r < s)
        {
            tmp = a[r]; a[r] = a[s]; a[s] = tmp; r++; s--;
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }

}

int main()
{
    int b[20];
    int n , k;

    cout << "\nNhap n: ";
    cin >> n;
   
    nhap(b, n);
    cout << "\nDay vua nhap: ";
    xuat(b, n);

    /*cout << "\nNhap k: ";
    cin >> k;*/

    
    ////cout<<"\ng: "<< TimKiem(b, n, x);
    //cout << "\nxuat sap xep: ";
    //BubbleSort(b, n);
    //xuat(b, n);

    /*cout << "Giai Thua"<< gthua(n);*/
    
   /* cout << "g" << lt(n);*/

   /* cout << "\nBinary: ";
    BinarySearching(b, n, x);*/

    /*cout << "\nChen ";
    Insersort(b, n);
    xuat(b, n);*/


    /*if (binarySearch(b, 0, n - 1, x))
        cout << "\nTim thay x trong day";
    else
        cout << "Khong tim thay";
     */


    /*int a[] = { -3, -3, 15, -3 }; 
    int n = 4; 
    int x = -3;

    cout<<"\nxuat: " << FindX(a, n, x);*/
    
    /*int a[] = { 1, 3, 5};
    int n = 5, k = 3;*/


    /*int a[] = { 1, 3, 5, 4, 2 }; 
    int n = 5;*/

    /*ToHopKe(b, n, k);*/
    cout << "\ng: ";
    HoanViKe(b, n);
   
    

}


