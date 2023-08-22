#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a[10], n;
	cout << "Tinh tong cac phan u chia het cho 5 trong mang";
	cout << "\nNhap n: ";
	cin >> n;

	//Nhap day 
	for (short i = 0; i < n; i++) {
		cout << "     a[" << i << "]=";
		cin >> a[i];
	}

	//Tong chia het cho 5
	int tong = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] % 5 == 0)
			tong += a[i];

	}

	//Xuat day
	cout << "Day vua nhap: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\nTong cac phan tu chia het cho 5: " << tong;


}