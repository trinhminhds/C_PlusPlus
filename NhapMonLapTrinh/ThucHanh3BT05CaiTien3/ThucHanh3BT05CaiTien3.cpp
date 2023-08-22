
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Chuong trinh kiem tra so nguyen to";
	cout << "\nNhap vao n: ";
	cin >> n;

	if (n < 2)
		cout << n << " khong phai so nguyen to";
	else if (n == 2)
		cout << n << " la so nguyen to";
	else if (n % 2 == 0)
		cout << n << " Khong la so nguyen to";
	else
	{
		short demUocSo = 0;
		float canBacHai = sqrt(n);
		for (int i = 3; i <= canBacHai; i = i + 2)
			if (n % i == 0) {
				demUocSo++;
				break;
			}
		cout << n << " La so nguyen to";

	}
}

