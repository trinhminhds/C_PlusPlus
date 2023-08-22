#include<iostream>
using namespace std;

int main() {
	
	short n, i, m, j;
	int gt, A2, gt1, A1,A;
	cout << "Tinh A= 1!+2!+3!+...+n!\n";
	cout << "Nhap vao n: ";
	cin >> n;
	cout << "Tinh A= 1+2+3+...+n\n";
	cout << "Nhap vao m: ";
	cin >> m;


	gt = 1, gt1 = 1;
	A2 = 0, A1 = 0, A = 0;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++)
		gt *= i;
		A2 += gt;
		A1 += gt;
	}
	A = A2 / A1;
	cout << A;



}