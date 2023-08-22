// Viet ham in cac phan tu nguyen to trong mang cac so nguyen
#include<iostream>
using namespace std;

void TaoMang(int a[20], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];

		while (a[i] < 23)
		{
			cout << "Phai so lon hon 23, xin nhap lai: ";
			cout << "Nhap gia tri a[" << i << "]= ";
			cin >> a[i];
		}
	}
}

void XuatMang(int a[20], int n)
{
	cout << "\nDay vua nhap: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
}

bool soNguyenTo(int x)
{
	int i, d = 0;
	for (i = 1; i <= x ; i++)
	{
		if (x % i == 0)
			d++;
	}
	{
		if (d == 2)
			return 1;
		return 0;
	}
}

void kiemTraViTri(int a[20], int n)
{
	bool bay = 0;
	for (int i = 0; i < n ; i++)
		if (soNguyenTo(a[i]) == 1)
		{
			cout << "\nCac phan tu la So Nguyen To nam o vi tri ";
			if (bay == 0)
				bay = 1;
			cout << "a[" << i << "] = " << a[i];
		}

}
void main()
{
	int a[20], n;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;
	TaoMang(a, n);
	XuatMang(a, n);
	kiemTraViTri(a, n);
	cout << endl;
}