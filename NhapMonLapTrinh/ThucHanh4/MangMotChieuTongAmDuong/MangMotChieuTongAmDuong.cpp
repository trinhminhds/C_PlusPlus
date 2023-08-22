
#include <iostream>
using namespace std;

int main()
{
	int a[20], n, tongAm, tongDuong;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (short i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];	
	}

	tongAm = 0;
	tongDuong = 0;
	 
	for (short i = 0; i < n; i++)
		if (a[i] > 0)
			tongDuong += a[i];
		else
			tongAm += a[i];
	cout << "Tong phan tu duong: " << tongDuong;
	cout << "\nTong phan tu am: " << tongAm;
}
