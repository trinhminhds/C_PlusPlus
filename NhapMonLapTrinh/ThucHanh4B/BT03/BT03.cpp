
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
			cout << "\n";
		}
	//Tong Hang
	int tong;
	for (short i = 0; i < n; i++) {
		tong = 0;
		for (short j = 0; j < n; j++)
			tong += a[i][j];
		cout << "\nTong hang thu " << i << ": " << tong;
	}

	// Tong Cot
	for (short i = 0; i < n; i++) {
		tong = 0;
		for (short j = 0; j < n; j++)
			tong += a[j][i];
		cout << "\nTong hang thu " << i << ": " << tong;
	}

	tong = 0;
	for (short i = 0; i < n; i++) 
		tong += a[i][i];
	cout << "";
	//chua lam xong


	return 0;
}

