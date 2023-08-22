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
		int k = n * m;
		for (short i = 0; i < k - 1; i++)
		{
			for (short j = i + 1; j < k; j++)
				if (a[i / n][i % n] > a[j / n][j % n])
				{
					int tam = a[i / n][i % n];
					a[i / n][i % n] = a[j / n][j % n];
					a[j / n][j % n] = tam;
				}
		}
		cout << "Xuat :\n";
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << "\n";
		}
	}