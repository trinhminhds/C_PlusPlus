
#include <iostream>
using namespace std;

int main()
{
	int a[10][10], n, dem;
	cout << "Nhap ma so hang n cua ma tran: ";
	cin >> n;
	cout << "Nhap ma so cot n cua ma tran: ";
	cin >> n;

	for (short i = 0; i < n; i++)
		for (short j = 0; j < n; j++) {
			cout << "Nhap gia tri a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	cout << "Ma tran:\n";
	for (short i = 0; i < n; i++){
		for (short j = 0; j < n; j++)
			cout << i * n + (j + 1) << "   ";
		cout << "\n";
	}

}

