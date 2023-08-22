#include <iostream>
using namespace std;
int main() {
	int a[10][10], n;
	cout << "Chuong trinh dem cac gia tri chan tren duong cheo chinh";
	cout << "\nNhap ma tran n: ";
	cin >> n;

	//Nhap ma tran a[n][n]
	for (short i = 0; i < n; i++)
		for (short j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	//Xuat ma tran
	cout << "Ma tran vua nhap: \n";
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}

	//Dem so luong phan tu chan tren duong cheo chinh
	short soLuongPhanTu = 0;
	for (short i = 0; i < n; i++) {
		if (a[i][i] % 2 == 0)
			soLuongPhanTu++;
		
	}

	//Xuat ket qua
	cout << "\nSo luong gia tri chan nam tren duong cheo chinh: " << soLuongPhanTu;
}