
#include <iostream>
using namespace std;

int main()
{
	int i, giaTriPT, n, tong;
	cout << "Nhap so phan tu: ";
	cin >> n;
	tong = 0;
	i = 0;

	while (i++ < n) {
		cin >> giaTriPT;
		if (giaTriPT <= 0)
			continue;
		tong += giaTriPT;

	}
	cout << "Tong: " << tong;


 
}

 
