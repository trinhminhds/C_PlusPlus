
#include <iostream>
using namespace std;

int main()
{
	float a, b, c, delta;
	cout << "Tinh phuong trinh bac hai";
	cout << "\nNhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	 
	if (a == 0)
		if (b == 0)
			if (c == 0)
				cout << "Phuong trinh vo so nghiem";
			else
				cout << "Phuong trinh vo nghiem";
		else
			cout << "Phuong trinh co 1 nghiem x = " << -c / b;
	else {
		delta = (b * b - (4 * a * c));
		if (delta < 0)
			cout << "Phuong trinh vo nghiem";
		else if (delta > 0)
			cout << "Phuong trinh co 2 nghiem:"<< "x1:"<< sqrt(-b + (b * b - (4 * a * c)) / 2 * c) << "\nx2:"<< sqrt(-b - (b * b - (4 * a * c)) / 2 * c);
		else
			cout << "Phuong trinh co nghiem kep:"<< (-b / (2 * a));
		
	}


	return 0;





}

