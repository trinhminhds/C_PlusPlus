#include <iostream>
using namespace std;
int main() {
	int a[20], n, x;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;
	cout << "Nhap so can chen x: ";
	cin >> x;
	for (short i = 0; i < n; i++) {
		cout << "     a[" << i << "]=";
		cin >> a[i];
	}

	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";


	short vitriMax;
	int max = a[0];
	vitriMax = 0;
	for (short i = 1; i < n; i++)
		if (max < a[i]) {
			max = a[i];
			vitriMax = i;
		}

	for (short i = n; i > vitriMax + 1; i--)
		a[i] = a[i - 1];
	a[vitriMax + 1] = x;

	cout << "\nDay sau khi chen phan tu max: ";
	for (short i = 0; i < n + 1; i++)
		cout << a[i] << " ";
}