
#include <iostream>
using namespace std;
int main()
{
	short n, i, j;
	int gt, S;
	cout << "Tinh S =1! + 2! +....+ n!\n";
	cout << "Nhap vao n: ";
	cin >> n;

	gt = 1;
	S = 0;
	for (i = 1; i <= n; i++) {
		gt = 1;
		for (j = 1; j <= i; j++)
			gt *= j;
		S += gt;
	}
	cout << "Tong S =1! + 2! +....+ n! = " << S;
}//f9//f5//f11

