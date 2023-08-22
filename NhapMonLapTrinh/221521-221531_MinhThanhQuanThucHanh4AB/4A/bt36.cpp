#include "iostream"
using namespace std;
int main() {
	int a[20], n;
	cout << "Nhap vao so phan tu n:";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << " a[" << i << "]=";
		cin >> a[i];

	}
	cout << "Day vua nhap a:";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	int tam;
	for (short i = 0; i < n - 1; i++)
		for (short j = i + 1; j < n; j++)
			if (a[i] % 2 == 1 && a[j] % 2 == 1 && a[i] > a[j]) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;

			}
	cout << "\nDay tang dan:";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}