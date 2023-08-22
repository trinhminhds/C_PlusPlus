#include <iostream>
using namespace std;
int main() {
	int a[10][10], n, m;
	cout << "Nhap so hang n: "; 
	cin >> n;
	cout << "Nhap so cot m: "; 
	cin >> m;

	//Nhap ma tran a[n][m]
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++) {
			cout << "a[" << i << "]= ";
			cin >> a[i][j];
		}

	//Xuat ma tran a[n][m]
	cout << "Ma tran vua nhap:\n";
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}

	//Tim phan tu duong chan lam chuan 
	int min;
	short bay = 0;
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++) 
			if (a[i][j] % 2 == 0 && a[i][j] > 0){
				min = a[i][j];
			bay = 1;
			break;
		}
		if (bay)//bay ==1
			break;
	}

	if (!bay)//not cua bay ==1 la bay ==0
		cout << "\nKhong ton tai phan tu duong chan trong ma tran";
	else {
		//Tim phan tu duong nho nhat
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++)
				if (a[i][j] % 2 == 0 && a[i][j] > 0 && a[i][j] < min)
					min = a[i][j];
		cout << "\nPhan tu duong chan nho nhat: " << min;
	}
}

