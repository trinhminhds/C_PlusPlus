#include <iostream>
using namespace std;

int main() {
	int a[20], n;
	cout << "Nhap so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << " a[" << i << "]= ";
		cin >> a[i];
	}
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << "\nDay sau khi xoa vi tri le: ";
	for (short i = 0; i < n; i+=2)
		cout << a[i] << " ";
}