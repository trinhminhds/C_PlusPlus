
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Nhap vao gia tri a: ";
	cin >> a;
	cout << "Nhap vao gia tri b: ";
	cin >> b;
	cout << "Nhap vao gia tri c: ";
	cin >> c;
	

	{
		if (a > b && a > c) {
			cout << "So lon nhat la " << a << endl;
		}
		else if (b > a && b > c) {
			cout << "So lon nhat la " << b << endl;
		}
		else {
			cout << "So lon nhat la " << c << endl;
		}



		if (a < b && a < c) {
			cout << "So be nhat la " << a << endl;
		}
		else if (b < a && b < c) {
			cout << "So be nhat la " << b << endl;
		}
		else {
			cout << "So be nhat la " << c << endl;
		}
	}

	if (a == b && b==c && c==a)
		cout << "Ba so bang nhau";

	



}

  
	IDE VS2019


