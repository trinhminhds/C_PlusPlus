
#include <iostream>
using namespace std;

int tongLe(int n);
int tongChan(int n);

int main()
{
	int n;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (n > 0) {
		cout << "Tong le S1: " << tongLe(n);
		cout << "\nTong chan S2: " << tongChan(n);

	}
	else cout << "Ban nhap sai, So n phai nguyen duong ";
}


int tongLe(int n) {
	int ketQua = 0;
	for (short i = 1; i <= (2 * n + 1); i += 2)
		ketQua += i;
	return ketQua;

}

int tongChan(int n) {
	int tam, ketQua = 0;
	tam = 2 * n + 3;
	for (short i = 2; i < tam; i += 2)
		ketQua += i;
	return ketQua;
}


