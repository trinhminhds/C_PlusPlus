#include <iostream>
using namespace std;

int main() {
	int a[20], n, x;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;
	for (short i = 0; i < n; i++)
	{
		cout << " a[" << i << "]= ";
		cin >> a[i];
	}
	cout << "Nhap vo so x can chen: ";
	cin >> x;
	cout << "Day vua nhap: ";
	for (short i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	for (short i = n; i >=0; i--) {
		a[i + 1] = a[i];
	}
	a[0] = x;
	

	cout << "Day vua chen x: ";
	for (short i = 0; i <= n; i++) {
	
	
		cout << a[i] << " ";
	}

}