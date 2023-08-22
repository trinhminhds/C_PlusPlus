#include <iostream>
using namespace std;

int main() {
	short n, i;
	int S, gt;
	cout << "Tinh S= -1!+2!-3!+4!-5!+...+n!";
	cout << "\nNhap vao so nguyen duong n: ";
	cin >> n;

	S = 0, gt = 1;
	for (i = 1; i <= n; i++) {
		gt *= i;
		if (i % 2 == 1)
			S -= gt;
		else
			S += gt;
	}
	cout << "Tinh S= -1!+2!-3!+4!-5!+...+n!= " << S;
}
