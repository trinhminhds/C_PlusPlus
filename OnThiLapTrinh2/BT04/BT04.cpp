#include "iostream"
using namespace std;
char* inHoa(char a[]);
char* inThuong(char a[]);
void chuoiDaoNguoc(char a[], char chuoiDao[]);
short demSoTu(char a[]);


int main() {
	// nhap day ky tu 
	char kyTu1[100], kyTu2[100];

	cout << " Nhap day ky tu in thuong :";
	cin.getline(kyTu1, 40);//nhieu nhat la 40 ky tu 

	cout << "Nhap day ky tu in hoa:";
	cin.getline(kyTu2, 40);

	//Xuat day ky tu vua nhap 
	cout << "Day vua nhap:" << kyTu1;

	// xuay day da chuyen sang in hoa 
	cout << " \nDay in hoa:" << inHoa(kyTu1);

	cout << "\nDay vua nhap: " << kyTu2;

	//Xuat day da chuyen snag in thuong
	cout << "\nDay in thuong: " << inThuong(kyTu2);

	cout << "\nDay vua nhap: " << kyTu1;
	chuoiDaoNguoc(kyTu1,kyTu2);
	cout << "\nDay dao nguoc: " << kyTu2;
	 

	cout << "\nDay vua nhap: " << kyTu1;
	cout << "\nSo ky tu cua day: " << demSoTu(kyTu1);

}
//////////////////////////////////////
// chuyen sang in hoa 
char* inHoa(char a[]) {
	char chuoiTam[200];
	short i = 0;
	while (a[i] != '\0') {
		if (a[i] >= 'a' && a[i] <= 'z')
			chuoiTam[i] = a[i] - 32;
		else
			chuoiTam[i] = a[i];
		i++;
	}
	chuoiTam[i] = '\0';//Them vao ky tu ket thuc chuoi
	return chuoiTam;
}
// A:65
// a:95
// 0:48

//Chuyen sang in thuong
char* inThuong(char a[]) {
	char chuoiTam[200];
	short i = 0;
	while (a[i] != '\0') {
		if (a[i] >= 'A' && a[i] <= 'Z')
			chuoiTam[i] = a[i] + 32;
		else
			chuoiTam[i] = a[i];
		i++;
	}
	chuoiTam[i] = '\0';//Them vao ky tu ket thuc chuoi
	return chuoiTam;
}

void chuoiDaoNguoc(char a[], char chuoiDao[]) {

	short soKyTu = 0;
	while (a[soKyTu++] != '\0');

	soKyTu--;
	for (short i = 0; i < soKyTu; i++)
		chuoiDao[soKyTu - i - 1] = a[i];
	chuoiDao[soKyTu] = '\0';

}

short demSoTu(char a[]) {
	short soTu = 0;
	short i = 0;
	while (a[i] != '\0')
		if (a[i++] == ' ')
			soTu++;

	soTu++;

		return soTu;
}
