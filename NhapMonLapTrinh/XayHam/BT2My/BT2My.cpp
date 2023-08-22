
#include <iostream>
using namespace std;

int main()
{
	short a[20], n;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	short gt = 1, S = 0;
	for (short i = 0; i < n; i++) {
		gt *= i;
		if (a[i] % 2 == 0)
			S += gt;
		else
			S -= gt;
	}

	cout << "S = -1! + 2! -3! + 4! -5! + …. + n!: " << S;
}

