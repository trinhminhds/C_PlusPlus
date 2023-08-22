#include<iostream>
using namespace std;

void nhap(short a[][10], short n, short m);
void xuat(short a[][10], short n, short m);
short demPhanTuDuongChan(short a[][10], short n, short m);
short nhoNhat(short a[][10], short n, short m);
short duongNhoNhat(short a[][10], short n, short m);
short timViTriLonNhat(short a[][10], short n, short m);

int main() {

	short  b[10][10], x, y;
	cout << "Nhap so hang cua ma tran: ";
	cin >> x;
	cout << "Nhap so cot cua ma tran : ";
	cin >> y;
	nhap(b, x, y);
	cout << "\nMa tran vua nhap: \n";
	xuat(b, x, y);

	demPhanTuDuongChan(b, x, y);
	nhoNhat(b, x, y);
	duongNhoNhat(b, x, y);
	timViTriLonNhat(b, x, y);

}

void nhap(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

}


void xuat(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++)
			cout << a[i][j] << "  ";
		cout << "\n";
	}
}

short demPhanTuDuongChan(short a[][10], short n, short m) {
	short demSo = 0;
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++)
			if (a[i][j] > 0 && a[i][j] % 2 == 0)
				demSo++;

	cout << "\nCo " << demSo << " phan tu duong chan trong ma tran";
	return demSo;

}

short nhoNhat(short a[][10], short n, short m) {
	short min = a[0][0];

	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++)
			if (a[i][j] < min)
				min = a[i][j];

	cout << "\nPhan tu nho nhat: " << min;
	return min;
}

short duongNhoNhat(short a[][10], short n, short m) {
	short min = a[0][0];
		short bay = 0;

		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++)
				if (a[i][j] > 0) {
					bay = 1;
					break;
				}
		}
		if(bay)
			for (short i = 0; i < n; i++) {
				for (short j = 0; j < m; j++)
					if (a[i][j] > 0 && a[i][j] < min)
						min = a[i][j];

			}
		
		if (min > 0)
			cout << "\nPhan tu duong nho nhat: " << min;
		else
			cout << "Khong tim thay phan tu duong nho nhat";

		return min;

}

short timViTriLonNhat(short a[][10], short n, short m) {
	short max = a[0][0];
	short viTri = 0;
	for (short i = 0; i < n; i++) 
		for (short j = 0; j < m; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				viTri = i;
			}
		}
	cout << "\nPhan tu lon nhat nam tren hang: " << viTri;
	return viTri;
}
