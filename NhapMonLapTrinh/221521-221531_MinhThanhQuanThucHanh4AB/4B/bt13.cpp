#include <iostream>
using namespace std;
int main() {
	cout << "Chuong trinh tim phan tu am le lon nhat trong ma tran";
	int a[10][10], n, m;
	cout << "\nNhap so hang n: ";
	cin >> n;
	cout << "\nNhap so cot m: ";
	cin >> m;

	//Nhap ma tran a[n][m]
	for (short i = 0; i < n; i++) 
		for (short j = 0; j < m; j++){
			cout << "a[" << i << "][" << j << "]= ";
		cin >> a[i][j];
	}

	//Tim phan tu am lam chuan
	int min;
	short bay = 0;
	for (short i = 0; i < n; i++) {
		for(short j = 0; j < m;j++)
			if (a[i][j] % 2 == 0 && a[i][j] < 0) {
				min = a[i][j];
				bay = 1;
				break;
			}
		if (bay) //bay =1
			break;
	}

	if (!bay)  //Not cua bay =1 la bay =0
		cout << "\nKhong ton tai phan tu am le trong ma tran";
	else {
		//Tim phan tu am lon nhat
		for (short i = 0; i < n; i++)
			for(short j=0;j<m;j++)
			if (a[i][j] % 2 == 0 && a[i][j]<0 && a[i][j]>min)
				min = a[i][j];
		cout << "\nPhan tu am le lon nhat: " << min;
		
	}

	//Xuat ma tran 
	cout << "\nMa tran vua nhap: \n";
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}




}