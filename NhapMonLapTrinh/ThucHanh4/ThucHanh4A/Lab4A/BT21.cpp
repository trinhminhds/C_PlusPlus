// Viet ham tim vi tri phan tu am dau tien trong mang.
//Neu khong co phan tu am tra ve - 1.

#include<iostream>
using namespace std;


int main()
{
	int a[20], n;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];
	}

	
	cout << "Vi tri so am dau tien: ";
	for (short i = 0; i < n; i++) {
		if (a[i] < 0) {

			cout << "a[" << i << "]" << " ";


			return 0;
		}
		
	}
	


		
}
