#include <iostream>
//#include<algorithm>
using namespace std;

void nhap(short a[],short n);
void xuat(short a[],short n);

//short vetCan(short a[], short n, short x);

//short linhCanh(short a[], short n, short x);

//tim kiem nhi phan phải cần dùng mảng đã sắp xếp tăng dần hoặc giam dần
bool timKiemNhiPhan(short a[], short n, short x);

//de quy tim kiem nhi phan
bool deQuyNhiPhan(short a[], short left, short right, short x);
   
//tìm kiếm vị trí nhị phân o dau
short timViTriDau(short a[], short n, short x);

//tìm kiếm vị trí nhị phân o cuoi
short timViTriCuoi(short a[], short n, short x);


int main()
{
    short b[20], m;
    short x;
    cout << "Nhap so luong phan tu: ";
    cin >> m;
    cout << "\nNhap x: ";
    cin >> x;


    nhap(b, m);
    xuat(b, m);

    /*if (deQuyNhiPhan(b, 0 , m - 1 ,x))
        cout << "\nDa tim thay x";
    else
        cout << "\nChua tim thay";*/
   
    return 0;
}

void nhap(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}


void xuat(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

//short vetCan(short a[], short n, short x) {

//    short viTri = 0;
//
//    //Thuan toan vet can (vet tat ca cac phan tu co trong mang de tim ra x)
//    bool check = false;
//    for (short i = 0; i < n; i++)
//        if (a[i] == x) {
//            check = true;
//            viTri = i;
//            break;
//        }
//
//    if (check == true)
//        cout << "Tim thay x tai vi tri: " << viTri;
//    else
//        cout << "Khong tim thay x";
//}



//short linhCanh(short a[], short n, short x) {

////Thuan toan Linh Canh
////Dua phan tu can tim vao cuoi mang sau ddo duyet xem trong mang co ton tai phan tu nao can tim khong 
////-> neu trung thi retun tai vi tri do
//    bool check1 = false;
//    a[n] = x;
//    for (short i = 0; ; i++)
//        if (a[i] == x) {
//            check1 = true;
//            i;
//            break;
//        }
//
//    if (check1 == true)
//        cout << "Tim thay x tai vi tri: " << i;
//    else
//        cout << "Khong tim thay x";
//}


bool timKiemNhiPhan(short a[], short n, short x) {
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x) {
            return true;
        }
        //Thang dung giua nho hon x, thi phai tim ben phai,l=m+1;
        else if (a[mid] < x) {
            left = mid + 1;
        }
        //Phai tim o ben trai
        else {
            right = mid - 1;
        }
    }
    return false;
}

bool deQuyNhiPhan(short a[], short left, short right, short x) {
    if (left > right)
        return false;
    int mid = (left + right) / 2;
    if (a[mid] == x)
        return true;
    else if (a[mid] < x)
        return deQuyNhiPhan(a, left + 1, right, x);
    else
        return deQuyNhiPhan(a, left, right - 1, x);
}

short timViTriDau(short a[], short n, short x) {
    short res = -1;
    short left = 0, right = n - 1;

    while (left <= right)
    {
        short m = (left + right) / 2;
        if (a[m] == x) {
            res == m;
        }
        else if (a[m] < x) {
            left = m + 1;
        }
        else
            right = m - 1;
    }
    return res;
}

short timViTriCuoi(short a[], short n, short x) {
    short res = -1;
    short left = 0, right = n - 1;
    while (left <= right)
    {
        short mid = (left + right) / 2;
        if (a[mid] == x) {
            res == mid;
            left = mid + 1;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return res;
}
