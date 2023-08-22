#include <iostream>
using namespace std;

int main() {
	int a[20], n;
	cout << "Nhap so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];
	}

	short demUocSo = 0;
	float canBacHai = sqrt(n);
	cout << "Day so nguyen to: \n";
	for (short i = 0; i < n; i++)
		if (a[i] < 2)
			cout << "a[" << i <<"]= " << a[i] << " khong la so nguyen to\n";
		else if (a[i] == 2)
			cout << "a[" << i << "]= " << a[i] << " la so nguyen to\n";
		else if (a[i] % 2 == 0)
			cout << "a[" << i << "]= " << a[i] << " Khong la so nguyen to\n";
		else
		{

			for (int j = 3; j <= canBacHai; j = j + 2)
				if (j % a[i] == 0) {
					demUocSo++;
					break;
				}
			cout << "a[" << i << "]= " << a[i] << " La so nguyen to\n";

		}
	return 0;
	
}