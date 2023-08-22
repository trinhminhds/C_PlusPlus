
#include <iostream>
using namespace std;

int main()
{
	int n, demUocSo;

	cout << "Chuong trinh kiem tra so nguyen to";
	cout << "\nNhap vao n: ";
	cin >> n;

	if (n < 2)
		cout << n << "khong phai so nguyen to";
	else {
		demUocSo = 0;
		for (int i = 2; i <= sqrt(n); i++) //
			if (n % i == 0)
				demUocSo++;
		if (demUocSo == 0)//
			cout << n << " la so nguyen to";
		else
			cout << n << " Khong phai so nguyen to\n";

	}
}

