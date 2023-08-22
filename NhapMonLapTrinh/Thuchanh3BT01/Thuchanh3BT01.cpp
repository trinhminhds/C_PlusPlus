
#include <iostream>
#include "iomanip"
using namespace std;

int main()
{
	short n;
	double x;

	cout << "Lam tron so thuc voi n chu so thap phan\n";
	cout << "Nhap so thuc: ";
	cin >> x;

	cout << "Ban muon lam tron may chu so: ";
	cin >> n;

	cout << fixed << setprecision(13);
	cout << "\n\nso vua nhap: " << x;
	cout << fixed << setprecision(n) << "\nXuat so thuc voi: " << n << "\nChu so thap phan: " << x;







}

