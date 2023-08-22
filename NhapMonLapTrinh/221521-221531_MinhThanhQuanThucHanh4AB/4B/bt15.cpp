#include <iostream>
using namespace std;

//Ham kiem tra so nguyen to
int KiemTraSNT(short n) {
	float CanBacHai;
	CanBacHai = sqrt(n);
	if (n < 2)
		return false;
	for (short i = 2; i <= CanBacHai; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int a[10][10], n;
	cout << "Chuong trinh in cac so nguyen to nam tren duong cheo phu ma tran vuong";
	cout << "\nNhap so phan tu n: ";
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

	//Xuat ket qua
	cout << "Cac so nguyen to nam tren duong cheo phu ma tran vuong: ";
	for (short i = 0; i < n; i++) {
		if (KiemTraSNT(a[i][n - i - 1]))
			cout << a[i][n - i - 1] << " ";
	}



}