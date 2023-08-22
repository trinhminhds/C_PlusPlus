#include <iostream>
using namespace std;

int main() {
	int a[20], n, x;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}

	cout << "Nhap vao gia tri so sanh x: ";
	cin >> x;

	cout << "Day so vua nhap: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	for(short i = 0; i<n;i++)
		if (a[i] < x) {
			for (int j = i; j < n; j++)
				a[j] = a[j + 1];
			n--;
			i--;
		}

	cout << "Day so vua so sanh voi x = " << x << " la ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}