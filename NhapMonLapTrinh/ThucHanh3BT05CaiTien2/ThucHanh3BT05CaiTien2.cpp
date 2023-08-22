
#include <iostream>
using namespace std;

int main()
{
	int n, demUocSo, canBacHai;

	cout << "Chuong trinh kiem tra so nguyen to";
	cout << "\nNhap vao n: ";
	cin >> n;

	if (n < 2)
		cout << n << "khong phai so nguyen to";
	else {
		short demUocSo = 0;//
		float canBacHai = sqrt(n);//
		for (int i = 2; i <= canBacHai; i++) //
			if (n % i == 0) {
				demUocSo++;
				break;//
			}
		if (demUocSo == 0)
			cout << n << " la so nguyen to";
		else
			cout << n << " Khong phai so nguyen to\n";

	}
  
}

