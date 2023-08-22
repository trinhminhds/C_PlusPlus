
#include <iostream>
using namespace std;

int main()
{
	int a[10][10], n;
	cout << "Nhap so hang, cot cua ma tran vuong: ";
	cin >> n;

	//Nhap
	for (short i = 0; i < n; i++) 
		for (short j = 0; j < n; j++) {
			cout << "Nhap gia a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}


	//xuat
	cout << "\nMa tran vua nhap: \n";
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j]<<"  ";
		cout << "\n";
	}


	//Tong cac phan tu duong tren dong
	int tong;
	for (short i = 0; i < n; i++) {
		tong = 0;
		for (short j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				tong += a[i][j];

		cout << "\nTong phan tu chan tren dong " << i << ": " << tong;
	}

	return 0;
}

