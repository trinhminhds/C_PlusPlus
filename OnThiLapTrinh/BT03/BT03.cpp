#include<iostream>
using namespace std;
void nhap(short a[], short n);
void xuat(short a[], short n);
short phanTuNhoNhat(short a[], short n);
short phanTuDuongNhoNhat(short a[], short n);
short tongDuongTaiViTriChan(short a[], short n);


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
	
	cout << "\nTong cac phan tu duong tai vi tri chan: "<< tong;
	return tong;


}


