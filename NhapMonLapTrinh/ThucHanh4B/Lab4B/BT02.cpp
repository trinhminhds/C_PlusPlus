#include <iostream>
using namespace std;

int main()
{
	int a[10][10], n;
	cout << "Nhap vao n so hang, so cot cua ma tran vuong : ";
	cin >> n;

	for (short i = 0; i < n; i++)
		for (short j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	cout << "Ma tran vua nhap\n: ";
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++)
			cout << a[i][j];
		cout << "\n";
	}
	int max, tam;
	short viTriMax;
	for (short i = 0; i < n; i++) {
		max = a[i][0];
		viTriMax = 0;
		for (short j = 0; j < n; j++)
			if (max < a[i][j]) {
				max = a[i][j];
				viTriMax = j;
			}
		tam = a[i][viTriMax];
		a[i][viTriMax] = a[i][i];
		a[i][i] = tam;

		cout << "\nMa tran co phan tu lon nhat tren duong cheo chinh thuan: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
				cout << a[i][j];
			cout << "\n";
		}
	}



}

