#include <iostream>
#include <math.h>
using namespace std;


//Kiem tra so nguyen to
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
	int a[10][10], n,dem=0 ;
	cout << "Chuong trinh dem gia tri cac so nguyen to nam tren 2 duong cheo";
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

	//Dem so luong gia tri nguyen to tren duong cheo chinh
	for (short i = 0; i < n; i++) 
		if (KiemTraSNT(a[i][i]))
			dem++;
	

	//Dem so luong gia tri nguyen to tren duong cheo phu
	for (short i = 0; i < n; i++) {
		if (KiemTraSNT(a[i][n - i - 1]))
			dem++;
	}


	//Xuat ket qua
	cout << "\nSo luong gia tri nguyen to tren duong 2 cheo chinh: " << dem;
	





}