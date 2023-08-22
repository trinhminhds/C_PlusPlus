
#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d, max, min;
	short thoat;
	do {
		cout << "Nhap gia tri a: ";
		cin >> a;
		cout << "Nhap gia tri b: ";
		cin >> b;
		cout << "Nhap gia tri c: ";
		cin >> c;
		cout << "Nhap gia tri d: ";
		cin >> d;
		cout << "\n";

		max = a;
		if (max < b)
			max = b;
		if (max < c)
			max = c;
		if (max < d)
			max = d;


		min = a;
		if (min > b)
			min = b;
		if (min > c)
			min = c;
		if (min > d)
			min = d;

		if (max == min)
			cout << "Ca bon so bang nhau a = b = c = d:  " << a && b && c && d;

		else {
			cout << "So lon nhat: " << max;
			cout << "\nSo be nhat: " << min;
		}

		{
			cout << "\n\nNhan so bat ky de tiep tuc. Nhap so 1 de thoat: ";
			cin >> thoat;
		}
	}
		while (thoat != 1);
	
}
