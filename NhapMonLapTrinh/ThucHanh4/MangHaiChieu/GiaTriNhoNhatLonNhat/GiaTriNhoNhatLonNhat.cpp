
#include <iostream>
using namespace std;

int main()
{
	int a[10][10], m, n, min, max;
	cout << "Nhap vao so hang m cua ma tran: ";
	cin >> m;
	cout << "Nhap vao so hang n cua ma tran: ";
	cin >> n;
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++){
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	min = max = a[0][0];

	for (short i=0;i<m;i++)
		for(short j=0;j<n;j++){
			if (max < a[i][j])
				max = a[i][j];
			if (min > a[i][j])
				min = a[i][j];
		}
	cout << "Gia tri lon nhat: " << max;
	cout << "\nGia tri nho nhat : " << min;


}

