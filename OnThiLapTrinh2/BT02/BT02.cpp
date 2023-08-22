#include<iostream>
using namespace std;

int main() {
	int i, n;
	short gt, tuSo, mauSo;

	cout << "Nhap vao n: ";
	cin >> n;

	gt = 1;
	tuSo = 0;
	for (i = 1; i < n; i++) {
		gt *= i;
		tuSo += gt;
	}

	mauSo = 0;
	for (i = 1; i < n; i++)
		mauSo += 1;


	cout << "A = " << tuSo << "/" << mauSo << " = " << (float)tuSo / mauSo;

}