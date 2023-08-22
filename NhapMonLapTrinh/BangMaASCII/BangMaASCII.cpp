
#include <iostream>
using namespace std;

int main()
{
	
	int a;
	char c;
	do {
		cout << "\nNhap ky tu bat ky, nhan 0 de dung lai: ";
		cin >> c;
		a = c;
		cout << "Ky tu vua nhap: " << c;
		cout << "\nCo ma ASCII la: " << a << "\n\n";
	}
	while (c != '0');
}

