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
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	//Xuat ma tran a[m][n]
	cout << "\nMa tran vua nhap: \n";
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";

	}

	//Tim vi tri co gia tri lon nhat
	short tongHang, tongHangMax, viTriHangMax;
	tongHangMax = 0;
	viTriHangMax = 0;
	for (short j = 0; j < n; j++)
		tongHangMax += a[0][j];

	for (short i = 1; i < m; i++) {
		tongHang = 0;
		for (short j = 0; j < n; j++)
			tongHang += a[i][j];
		if (tongHang > tongHangMax) {
			tongHangMax = tongHang;
			viTriHangMax = i;
		}

	}
	//Xoa hang co tong lon nhat
	if (viTriHangMax != m - 1)
		for (short i = viTriHangMax; i < m; i++)
			for (short j = 0; j < n; j++)
				a[i][j] = a[i + 1][j];
	m--;
	//Xuat ma tran da xoa 1 hang
	cout << "\nHang co tong lon nhat la hang thu: " << viTriHangMax;
	cout << "\nMa tran da xoa  1 dong: \n";
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";

	}
}