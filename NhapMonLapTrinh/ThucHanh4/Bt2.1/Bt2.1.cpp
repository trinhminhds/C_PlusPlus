
#include <iostream>
using namespace std;

int main()
{
	//Khoi tao gia tri
	short a[20];
	for (short i = 0; i < 20; i++)
		a[i] = 20 - i;


	//Xuat day
	cout << "Day vua khoi tri: ";
	for (short i = 0; i < 20; i++)
		cout << a[i] << " ";
 
}

