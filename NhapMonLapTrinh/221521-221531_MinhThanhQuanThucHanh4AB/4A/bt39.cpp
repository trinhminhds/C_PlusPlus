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

	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	int b[20], c[20];

	short soLuongPhanTuB = 0, soLuongPhanTuC = 0;

	for (short i = 0; i < n; i++)
		if (a[i] % 2 == 1)
			b[soLuongPhanTuB++] = a[i];
		else if (a[i] != 0)
			c[soLuongPhanTuC++] = a[i];

	int tam;

	for (short i = 0; i < soLuongPhanTuC; i++)
		for (short j = 0; j < soLuongPhanTuC; j++)
		{
			if (c[i] < c[j])
			{
				tam = c[i];
				c[i] = c[j];
				c[j] = tam;
			}
		}

	for (short i = 0; i < soLuongPhanTuB; i++)
		for (short j = 0; j < soLuongPhanTuB; j++)
		{
			if (b[i] > b[j])
			{
				tam = b[i];
				b[i] = b[j];
				b[j] = tam;
			}
		}
	cout << "\n";
	for (short i = 0; i < soLuongPhanTuC; i++)
		cout << c[i] << " ";
	cout << "";
	for (short i = 0; i < soLuongPhanTuB; i++)
		cout << b[i] << " ";

	
}