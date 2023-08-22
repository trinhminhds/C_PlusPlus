
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	if (a == 0)

		if (b == 0)
			cout << "Phuong trinh vo so nghiem";

		else
			cout << "Phuong trinh vo nghiem";

	else {
		float x = -b / a;
		cout << "Nghiem x = " << x;
	}



}
