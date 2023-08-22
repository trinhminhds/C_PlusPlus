
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap gia tri a: ";
	cin >> a;
	cout << "Nhap gia tri b: ";
	cin >> b;

	if (a == b)
		cout << "Hai so bang nhau";
	else if (a > b)
		cout << "So lon nhat: " << a;
	else
		cout << "So lon nhat:" << b;

}

IDE VS2019
