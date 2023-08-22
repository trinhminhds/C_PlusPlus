#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i << ": ";
		cin >> a[i];
	}

}

void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - rand() % 100;

}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}

void HoanVi(int& x, int& y)
{
	int q = x;
	x = y;
	y = q;
}

bool KiemTraSNT(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i < x / 2; i++)
		if (x % i == 0)
			return false;
	return true;

}

void SapXepTangDanSNT(int a[], int n)
{
	int i, j;
	cout << "\nMang so nguyen to tang dan: \n";
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j] && KiemTraSNT(a[i]) == true && KiemTraSNT(a[j]) == true)
				HoanVi(a[i], a[j]);
}

void main()
{
	int a[MAX], n;
	cout << "Nhap so luong thuc cua mang: "; cin >> n;

	NhapMang(a, n);
	//MangNgauNhien(a,n);
	XuatMang(a, n);

	SapXepTangDanSNT(a, n);
	XuatMang(a, n);

	cout << endl;
}