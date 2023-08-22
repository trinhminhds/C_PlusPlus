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
			cout << "a[" << i << "]["<<j<<"]= ";
			cin >> a[i][j];
		}

	//Xuat ma tran a[n][m]
	cout << "Ma tran vua nhap:\n";
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}

	//Dem so phan tu chan, so phan tu le cua ma tran
	short soPhanTuChan = 0, soPhanTuLe = 0;
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++)
			if (a[i][j] % 2 == 0)
				soPhanTuChan++;
			else
				soPhanTuLe++;

	//Xuat ket qua
	cout << "\nSo phan tu duong tron ma tran: " << soPhanTuChan;
	cout << "\nSo phan am  trong ma tran: " << soPhanTuLe;
}
