
#include <iostream>
using namespace std;

int main()
{
	short n;
	cout << "Ve tam giac vuong\n";
	cout << "Nhap vao chieu cao: ";
	cin >> n;

	for (short i = 1; i <= n; i++) {
		for (short j = 0; j < i; j++)
			cout << "*";
		cout << "\n";

	}

}

