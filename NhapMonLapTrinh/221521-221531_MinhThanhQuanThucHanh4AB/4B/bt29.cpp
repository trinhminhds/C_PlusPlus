#include "iostream"
using namespace std;
int main() {
	int a[10][10], n, m;
	cout << "Nhap so hang m: ";
	cin >> m;
	cout << "Nhap so cot n: ";
	cin >> n;

	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	cout << "Xuat day vua nhap:\n";
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	short b[100], tongSoPhanTu, demPhanTuB = 0;
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++)
			b[demPhanTuB++] = a[i][j];

	tongSoPhanTu = m * n;
	cout << "Chuyen sang day 1 chieu: ";
	for (short i = 0; i < tongSoPhanTu; i++)
		cout << b[i] << " ";

	short viTriMin, tam;
	for (short i = 0; i < tongSoPhanTu - 1; i++) {
		viTriMin = i;
		for (short j = i + 1; j < tongSoPhanTu; j++)
			if (b[viTriMin] > b[j])
				viTriMin = j;

		if (viTriMin != i) {
			tam = b[i];
			b[i] = b[viTriMin];
			b[viTriMin] = tam;
		}
	}

	cout << "\nDay 1 chieu tang dan: ";
	for (short i = 0; i < tongSoPhanTu; i++)
		cout << b[i] << " ";

	for (short i = 0; i < tongSoPhanTu; i++)
		if ((i / n) % 2 == 0)
			a[i / n][i % n] = b[i];
		else
			a[i / n][n - 1 - i % n] = b[i];

	cout << "\nXuat ma tran tang dan theo yeu  cau :\n";
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}

}