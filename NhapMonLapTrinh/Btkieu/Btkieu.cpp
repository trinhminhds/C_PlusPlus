
#include <iostream>
#include "iomanip"
using namespace std;

int main()
{
	int n;
	double a = 1.0;
	double b = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

	//cout << setprecision(18);
	cout << "a=" << a;
	cout << "\nb=" << b;

	//b = roundf(b);
	//cout << "\nLam tron b=" << b;
	if (a == b)
		cout << "\n a bang b";
	else
		cout << "\na khong bang b ";


}