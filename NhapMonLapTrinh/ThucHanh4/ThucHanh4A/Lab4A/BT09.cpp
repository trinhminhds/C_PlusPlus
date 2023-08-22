
#include <iostream>
using namespace std;

int main()
{
	int a[20], n;
	cout << "Nhap so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "Nhap gia tri a[" << i << "]= ";
		cin >> a[i];
	}
	cout << "Day so chinh phuong nam o vi tri le: ";
	for (short i = 1; i < n; i+=2) {
		float canBacHai = sqrt(a[i]);
		short bay = 0;
			for (short j = 1; j <= canBacHai; j++) 
				if (j * j == a[i])
				{
					bay = 1;

					break;
				}

			if (bay) // bay == 1
				cout << "a[" << i << "]= " << a[i] << "  ";
				
			
			
		
	}
}

