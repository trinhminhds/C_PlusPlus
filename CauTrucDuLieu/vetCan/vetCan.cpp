
#include <iostream>
using namespace std;

int main()
{

	short a[20];
	int x, n, i = 0;

	cout << "Nhap so luong phan tu n: ";
	cin >> n;

	cout << "Nhap x: ";
	cin >> x;

	bool check = false;
	short viTri = 0;

	// Tim kiem tuan tu co linh canh
	// a[n] = x;  //Gan linh canh vao cuoi mang.
	do
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
		if (a[i] == x)
		{
			check = true;
			viTri = i;
			break;
		}
		i++;
	} while (i < n);

	if (check == false)
		cout << "\nKhong tim thay x";
	else
		cout << "x " << viTri;

	return 0;
}
