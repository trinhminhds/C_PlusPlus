#include <iostream>
using namespace std;

int main()
{
	int a[20], n;
	cout << "Nhap vao day so nguyen to\n";
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];
	}

	cout << "Cac phan tu co gia tri le: ";
	for (short i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			cout << "a[" << i << "]= " << a[i] << "  ";
	

}