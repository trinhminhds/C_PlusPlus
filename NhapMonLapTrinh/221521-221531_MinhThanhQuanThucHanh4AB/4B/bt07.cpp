
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
	//TONG CAC PHAN TU AM TREN COT
	int tong;
	for (short i = 0; i < n; i++) {
		tong = 0;
		for (short j = 0; j < n; j++)
			if(a[j][i]<0)
			tong += a[i][j];
		cout << "\nTong phan tu am tren cot thu  " << i << ": " << tong;
	}

	
}

