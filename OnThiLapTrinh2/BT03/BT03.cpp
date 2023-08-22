#include<iostream>
using namespace std;
void nhap(short a[], short n);
void xuat(short a[], short n);
short phanTuNhoNhat(short a[], short n);
short phanTuDuongNhoNhat(short a[], short n);
short tongDuongTaiViTriChan(short a[], short n);
void tachDay(short a[], short n,short b[],short &m,short c[],short &k);
short chenPhanTu(short a[], short n,short x,short k);

int main() {
	short b[20], m;
	cout << "Nhap vao so luong phan tu: ";
	cin >> m;

	nhap(b, m);
	cout << "\nDay vua nhap: ";
	xuat(b, m);
	phanTuNhoNhat(b, m);

	phanTuDuongNhoNhat(b, m);

	tongDuongTaiViTriChan(b, m);

	short dayViTriChan[20], dayViTriLe[20];
	short soLuongPTViTriChan, soLuongPTViTriLe;
	tachDay(b,m,dayViTriChan,soLuongPTViTriChan,dayViTriLe,soLuongPTViTriLe);

	cout << "\nDay vi tri chan: "; 
	xuat(dayViTriChan, soLuongPTViTriChan);

	cout << "\nDay vi tri le: ";
	xuat (dayViTriLe, soLuongPTViTriLe);
	
	short x = 10, k = 3;
	short kqChen;
	kqChen = chenPhanTu(b, m, x, k);
		if (kqChen == -1)
			cout << "Chen that bai vi nhap sai vi tri cna chen";
		else {
			cout << "\nDay sau khi chen: ";
			xuat(b, m + 1);
		}

}


void nhap(short a[], short n) {
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void xuat(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}


short phanTuNhoNhat(short a[], short n) {
	short min = a[0];
	for (short i = 0; i < n; i++) {
		if (a[i] < min)
			min = a[i];
	}
	cout << "\nPhan tu nho nhat: " << min;
	return min;
}


short phanTuDuongNhoNhat(short a[], short n) {
	short minDuong = 0;
	short bay = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] > 0) {
			minDuong = a[i];
			bay = 1;
			break;
		}
	}
	if (bay) {
		for (short i = 0; i < n; i++)
			if (a[i] > 0 && a[i] < minDuong) {
				minDuong = a[i];
			}
	}
	if (minDuong != 0) {
		cout << "\nPhan tu duong nho nhat la: " << minDuong;
	}
	else
		cout << "\nKhong co phan tu duong trong mang ";
	return minDuong;
}


short tongDuongTaiViTriChan(short a[], short n) {
	short tong = 0;

	for (short i = 0; i < n; i += 2)
		if (a[i] > 0)
			tong += a[i];

	cout << "\nTong cac phan tu duong tai vi tri chan: " << tong;
	return tong;


}

void tachDay(short a[], short n, short b[], short& m, short c[], short& k) {

	m = k = 0;
	for (short i = 0; i < n; i++)
		if (i % 2 == 0)
			b[m++] = a[i];
		else
			c[k++] = a[i];
}

short chenPhanTu(short a[], short n, short x, short k) {

	if (k<0 || k>n - 1)
		return -1;
	for (short i = n; i > k; i--)
		a[i] = a[i - 1];
	a[k] = x;
	return 1;
}