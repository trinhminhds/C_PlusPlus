
#include <iostream>
using namespace std;

int main()
{
	int a[10][10], m, n;
	cout << "Nhap vao so hang m cua ma tran: ";
	cin >> m;
	cout << "Nhap vao so hang n cua ma tran: ";
	cin >> n;
    for(short i=0;i<m;i++)
		for (short j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	cout << "Ma tran vua nhap: \n";
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++)
			cout << a[i][j] << "  ";
	cout << "\n";

}

