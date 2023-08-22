
#include <iostream>
#include<string>
//#include<stdio.h>

using namespace std;

struct NhanVien
{
	char hoTen[100];
	char phongBan[20];
	float luong;
};

int main()
{
	NhanVien nv[20];
	short n;
	cout << "Nhap vao so luong nhan vien: ";
	cin >> n;
	
	// Nhap thong tin nhan vien
	cout << "\nNhap thong tin nhan vien";
	for (short i = 0; i <= n; i++){
		cout << "\nPhong ban: ";
		cin.getline(nv[i].phongBan, 20);
		fflush(stdin);
		cout << "\nHo va Ten: ";
		cin.getline(nv[i].hoTen, 50);
		cout << "Luong: ";
		cin >> (nv[i].luong);
		
	}

	//Xuat thong tin nhan vien
	for (short i = 0; i < n; i++) {
		cout << "\nThong tin da nhap:___";
		cout << "\nHo va Ten: " << nv[i].hoTen;
		cout << "\nPhong ban: " << nv[i].phongBan;
		cout << "\nLuong: " << nv[i].luong;
	}

	return 0;
}
