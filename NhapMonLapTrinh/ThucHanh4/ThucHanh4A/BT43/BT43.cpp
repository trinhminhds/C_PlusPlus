
#include <iostream>
using namespace std;

int main()
{

	int a[20], X, n;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	cout << "Nhap X: ";
	cin >> X;

	for (short i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];
	}

	cout << "Day so vua nhap a: ";
	for (short i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}


	int delta = abs(X - a[0]), k = 0;
	//Xoa gia tri gan nhat
	//Tim do lech gan nhat cua x va cac phan tu trong mang

	for (short i = 1; i < n - 1; i++) {

		{
			{
				if (delta > abs(X - a[i]))
					delta = abs(X - a[i]);

			}

		}
		//Duyet mang tu phan tu cuoi
		for (short i = n - 1; i >= 0; i--)
		{
			if (delta == abs(X - a[i]))
			{
				for (short j = i; j < n - 1; j++)
				{
					a[j] = a[j+1];
				}
				n--;

			}


			cout << "\nDay so :" << a[i];
			return 0;
		}
	}
	//xoa gia tri nho
	for (short i = 0; i < n; i++) {
		if (a[i] > X) {
			a[k++] = a[i];
			n = k;
		}
		cout << "\nDay so: " << a[i];
		return 0;
	}
	

	
	   
	


}