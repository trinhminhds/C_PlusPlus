
#include <iostream>
using namespace std;

int main()
{

		int n;
		cout << "Nhap vao n: ";
		cin >> n;
		{
			float canBacHai = sqrt(n);
			short bay = 0;
			for (int i = 1; i <= canBacHai; i++)
				if (i * i == n)
				{
					bay = 1;

					break;
				}
			if (bay) // bay == 1
				cout << n << " la so chinh phuong";
			else
				cout << n << " Khong la so chinh phuong";
		}

}

