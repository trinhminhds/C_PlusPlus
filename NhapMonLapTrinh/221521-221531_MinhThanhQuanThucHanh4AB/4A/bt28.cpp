#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a[10], n;
	cout << "Chuong trinh tinh tong cac phan tu le co trong day so nguyen";
	cout << "\nNhap n: ";
	cin >> n;

	//Nhap day 
	for (short i = 0; i < n; i++) {
		cout << "     a[" << i << "]=";
		cin >> a[i];
	}
	
	//tong phan tu le
	int S = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] % 2 == 1)
			S += a[i];
	}

	//Xuat day
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\nTong phan tu le: " <<S;
}