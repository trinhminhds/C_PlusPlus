#include <iostream>
using namespace std;

struct PHANSO {
	int tuso;
	int mauso;
};

void cau1();
void cau2();
void cau3();


int main() {

	cau1();
	cau2();
	cau3();
	

	return 0;
}

void nhap(PHANSO ps[],int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nNhap tu so [" <<i<<"]= ";
		cin >> ps[i].tuso ;
		cout << "Nhap mau so [" << i << "]= ";
		cin >> ps[i].mauso;
	}
}

void xuat(PHANSO ps[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nPhan so: " << ps[i].tuso << "/" << ps[i].mauso;

	}
}


void cau1() {

	void nhap(PHANSO ps[], int n);
	void xuat(PHANSO ps[], int n);
	int tongPS(PHANSO ps[], int n);
	int truPS(PHANSO ps[], int n);
	int nhanPS(PHANSO ps[], int n);
	int chiaPS(PHANSO ps[], int n);

	PHANSO ps[20];
	int m;
	cout << "Nhap so luong phan so cau 1: ";
	cin >> m;
	cout << "\nNhap phan so: " << endl;
	nhap(ps, m);
	cout << "\nDay so vua nhap: ";
	xuat(ps, m);

	tongPS(ps, m);
	truPS(ps, m);
	nhanPS(ps, m);
	chiaPS(ps, m);

}

int tongPS(PHANSO ps[], int n) {
	int tong_tuso = 0, tong_mauso = 1;
	for (int i = 0; i < n; i++) {
		tong_tuso = tong_tuso * ps[i].mauso + ps[i].tuso * tong_mauso;
		tong_mauso = tong_mauso * ps[i].mauso;
	}
	cout << "\n\nTong cua cac phan so: " << tong_tuso << "/" << tong_mauso;

	return tong_tuso, tong_mauso;
}

int truPS(PHANSO ps[], int n) {
	int tru_tuso = 1, tru_mauso = 1;
	for (int i = 0; i < n; i++) {
		tru_tuso = tru_tuso * ps[i].mauso - ps[i].tuso * tru_mauso;
		tru_mauso = tru_mauso * ps[i].mauso;
	}

	cout << "\nTru cac phan so: " << tru_tuso << "/" << tru_mauso;
	return tru_tuso, tru_mauso;
}


int nhanPS(PHANSO ps[], int n) {
	int nhan_tuso = ps[0].tuso, nhan_mauso = ps[0].mauso;
	for (int i = 1; i < n; i++) {
		nhan_tuso = nhan_tuso * ps[i].tuso;
		nhan_mauso = nhan_mauso * ps[i].mauso;
	}

	cout << "\nNhan cac phan so: " << nhan_tuso << "/" << nhan_mauso;
	return nhan_tuso, nhan_mauso;
}

int chiaPS(PHANSO ps[], int n) {
	int chia_tuso = ps[0].tuso, chia_mauso = ps[0].mauso;
	for (int i = 1; i < n; i++) {
		chia_tuso = chia_tuso * ps[i].mauso;
		chia_mauso = chia_mauso * ps[i].tuso;
	}

	cout << "\nChia cac phan so: " << chia_tuso << "/" << chia_mauso;
	return chia_tuso , chia_mauso;
}


void cau2() {
	void nhap(PHANSO ps[], int n);
	void xuat(PHANSO ps[], int n);
	void bubbleSort(PHANSO ps[], int n);
	PHANSO ps[20];
	int n;
	cout << "\n\tNhap so luong phan so cau 2: ";
	cin >> n;
	cout << "\nNhap phan so: " << endl;
	nhap(ps, n);
	cout << "\nDay so vua nhap: ";
	xuat(ps, n);

	cout << "\n\tSap xep noi bot 1: ";
	bubbleSort(ps, n);
	xuat(ps, n);

}

void bubbleSort(PHANSO ps[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			float PS1 = (float) ps[i].tuso / ps[i].mauso;
			float PS2 = (float) ps[j].tuso / ps[j].mauso;
			if (PS1 > PS2)
			{
				swap(ps[i], ps[j]);
			}
		}
	}
}



void cau3() {
	void nhap(PHANSO ps[], int n);
	void xuat(PHANSO ps[], int n);
	int rutGon(int a, int b);
	void rutGonPS(PHANSO ps[], int n);

	PHANSO ps[20];
	int n;
	cout << "\n\tNhap so luong phan so cau 3: ";
	cin >> n;
	cout << "\nNhap phan so: " << endl;
	nhap(ps, n);
	cout << "\nDay so vua nhap: ";
	xuat(ps, n);
	
	rutGonPS(ps, n);
	cout << "\n\n\tMang sau khi rut gon phan so: ";
	xuat(ps, n);

}

int rutGon(int a, int b) {
	while (b != 0)
	{ 
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void rutGonPS(PHANSO ps[],int n) {
	for (int i = 0; i < n; i++) {
		int rut = rutGon(ps[i].tuso, ps[i].mauso);
		ps[i].tuso /= rut;
		ps[i].mauso /= rut;
	}
}

