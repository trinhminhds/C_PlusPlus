
#include <iostream>
using namespace std;

int main()
{
	float a, b, c, delta;
	cout << "Giai pt ax^2+bx+c=0.\nNhap vao a: ";
	cin >> a;
	cout << "Nhap pt b: ";
	cin >> b;
	cout << "Nhap pt c: ";
	cin >> c;


	if (a == 0)
		if (b == 0)
			if (c == 0)
				cout << "\nPhuong trinh vo so nghiem: ";
			else
				cout << "\nPhuong trinh vo nghiem: ";
		else
			cout << "\nPhuong trinh co 1 nghiem: x =" << (-c / b);


	else {
		delta = b * b - 4 * a * c;
		if (delta < 0)
			cout << "\nPhuong trinh vo nghiem";
		else if (delta > 0)
			cout << "\nPt co 2 nghiem: x1 =" << (-b + sqrt(delta)) / (2 * a) << "va x2 =" << (-b - sqrt(delta)) / (2 * a);
		else
			cout << "\n Pt nghiem kep: x1 = x2 =" << (-b / (2 * a));

	}

}

