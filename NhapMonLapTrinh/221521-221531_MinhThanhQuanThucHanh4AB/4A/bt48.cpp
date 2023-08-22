#include <iostream>
using namespace std;

int main() {
	int a[20], b[20], n;
	cout << "Nhap so luong phan tu n: ";
	cin >> n;
	for (short i = 0; i < n; i++)
	{
		cout << " a[" << i << "]= ";
		cin >> a[i];
	}
	for (short i = 0; i < n; i++)
	{
		cout << " b[" << i << "]= ";
		cin >> b[i];
	}
	cout << "Day a: ";
	for (short i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\nDay b: ";
	for (short i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	int leA[20], leB[20], chanA[20], chanB[20];
	short lA = 0, lB = 0, cA = 0, cB = 0;

	for (short i = 0; i < n; i++)
		if (a[i] % 2 == 1)
			leA[lA++] = a[i];
		else if (a[i] != 0)
			chanA[cA++] = a[i];

	for (short i = 0; i < n; i++)
		if (b[i] % 2 == 1)
			leB[lB++] = b[i];
		else if (b[i] != 0)
			chanB[cB++] = b[i];

	cout << "\nDay c: ";
	for (short i = 0; i < cA; i++)
		cout << chanA[i] << " ";
	for (short i = 0; i < cB; i++)
		cout << chanB[i] << " ";
	for (short i = 0; i < lA; i++)
		cout << leA[i] << " ";
	for (short i = 0; i < lB; i++)
		cout << leB[i] << " ";


}