#include <iostream>
using namespace std;
int main() {

	int a[20], n;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "     a[" << i << "]=";
		cin >> a[i];
	}

	cout << "Day vua nhap : ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";


	int tam;
	for (short i = 0; i < n - 1; i++)
		for (short j = i + 1; j < n; j++)
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}

	//Xuat day giam dan
	cout << "\nDay giam dan: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}