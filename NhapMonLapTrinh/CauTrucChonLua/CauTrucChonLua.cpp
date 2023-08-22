
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Nhap gia tri a: ";
	cin >> a;
	cout << "Nhap gia tri b: ";
	cin >> b;
	cout << "Nhap gia tri c: ";
	cin >> c;

	
	if (a == b && b == c && a==c)
		cout << "Ca ba so bang nhau\n";


	{
		if (a <= b && a <= c)
			cout << "So be nhat la: " << a << endl;

		else if (b <= c && b <= a)
			cout << "So be nhat la: " << b << endl;

		else if (c <= a && c <= b)
			cout << "So be nhat la: " << c << endl;

		else
			cout << "So be nhat la: " << a || b || c ;
	}


	// da sua xong bai tap ve nha
	// mat 2h 
	// xet 13 dieu kien

}

