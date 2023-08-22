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

    
	int max = a[0], i;
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	for (i = 0; i < n; i++)
		if (a[i] == max)
		{
			for (int j = i; j < n; j++)

				a[j] = a[j + 1];
			n--;
			i--;
			break;
		}
		
		
		cout << "\nDay vua xoa so lon nhat: ";
		for (short i = 0; i < n; i++)
			cout << a[i] << " ";


}