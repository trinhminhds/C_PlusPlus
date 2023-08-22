#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a[20], n;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhap day
	for (short i = 0; i < n; i++) {
		cout << "     a[" << i << "]=";
		cin >> a[i];
	}

	//Xuat day a
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Tong ca phan tu co gia tri le nam o vi tri chan
	int S = 0;
	for (short i = 1; i < n; i += 2) {
		if (a[i] % 2 == 0)
			S += a[i];
	}


	cout << "\nTong cac phan tu co gia tri chan nam o vi tri le: " << S;
}

