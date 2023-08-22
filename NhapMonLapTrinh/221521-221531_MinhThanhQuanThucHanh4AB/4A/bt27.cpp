#include <iostream>
using namespace std;
int main() {
	int a[20], n;
	cout << "Chuong trinh in ra man hinh nhung phan tu co gia tri tu 1 den x trong day ";
	cout << "\nNhap so n: ";
	cin >> n;


	//Nhap day
	for (short i = 0; i < n; i++) {
		cout << "     a[" << i << "]=";
		cin >> a[i];
	}

	int flag,x;
	
	flag = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] >= 1 && a[i] <= x)
			cout << " " << i;
		flag = 1;
	}
	if (flag == 0);
	cout << "Khong co phan tu thoa man dieu kien ";
}