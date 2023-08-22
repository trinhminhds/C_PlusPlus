#include <iostream> 
using namespace std;
int main() {
	int a[10][10], m;
	int n;
	cout << "Nhap so dong: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
	cout << "\nMa tran vua nhap\n";
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < m; j++)

			cout << a[i][j] << " ";
		cout << "\n";

	}

	short k;
	

		cout << "Nhap hang can xoa: ";
		cin >> k;

	for (short i = k; i < n-1   ; i++)
	{
		for (short j = 0; j < m; j++)
		{
			 a[i][j]=a[i + 1][j] ;
		
		}
	}
	n--;
	cout << "\nMa tran sau khi xoa\n";
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < m; j++)
		
			cout << a[i][j] << " ";
			cout << "\n";
		
	}

}