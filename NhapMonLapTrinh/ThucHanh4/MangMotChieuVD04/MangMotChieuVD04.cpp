
#include <iostream>
using namespace std;

int main()
{
	int a[20], n, max, min;

	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++){
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];
	}
	
	max = min = a[0];
	for (short i = 1; i < n; i++){
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	cout << "Phan tu lon nhat: " << max;
	cout << "\nPhan tu nho nhat: " << min;

	return 0;
}

