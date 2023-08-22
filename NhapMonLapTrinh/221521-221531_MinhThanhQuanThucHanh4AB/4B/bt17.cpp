#include <iostream>
using namespace std;
int main() {
	int a[10][10], n;
	cout << "Chuong trinh tim cot co tong nho nhat";
	cout << "\nNhap so n: ";
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

	//tim cot co tong nho nhat
	int min_sum = INT_MAX;
	int cotNho = -1;
	for (int j = 0; j < n; j++) {
		int S= 0;
		for (int i = 0; i < n; i++) 
			S += a[i][j];
		if (S < min_sum) {
			min_sum = S;
			cotNho = j;
		}
	}

	//xuat ket qua
	cout << "Cot co tong nho nhat la cot thu: " << cotNho;
}