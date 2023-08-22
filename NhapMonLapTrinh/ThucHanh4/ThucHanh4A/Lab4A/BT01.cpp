
#include <iostream>
using namespace std;

int main()
{

	int a[20], n;

	cout << "Nhap so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];

	}
	cout << "Day so thuc: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << "  ";
		
}   