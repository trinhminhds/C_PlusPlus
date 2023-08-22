#include<iostream>
using namespace std;


int main()
{
	int a[20], n;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhap
	for (short i = 0; i < n; i++) {
		cout << " a[" << i << "]=";
		cin >> a[i];
	}

	//loai bo so trung nhau 
	for (short i = 1; i < n; i++)
	{
		for (short j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				for (short k = i; k < n; k++)
				{
					a[k] = a[k + 1];
					n--;
					i--;
				}
			}
		}
	}

	cout << "\nMang sau khi xoa trung nhau la: \n";
	for (short i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}



//1:33 PM 4/16/2023 test xong