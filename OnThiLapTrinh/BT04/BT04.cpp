#include "iostream"
using namespace std;
char* inHoa(char a[]);
char* inThuong(char a[]);

int main() {
	// nhap day ky tu 
	char kyTu1[100], kyTu2[100];

	cout << " Nhap day ky tu in thuong :";
	cin.getline(kyTu1, 40);//nhieu nhat la 40 ky tu 

	cout << "Nhap day ky tu in hoa:";
	cin.getline(kyTu2, 40);

	//Xuat day ky tu vua nhap 
	cout << " Day vua nhap:" << kyTu1;

	// xuay day da chuyen sang in hoa 
	cout << " \n Day in hoa:" << inHoa(kyTu1);

	cout << "\nDay vua nhap: " << kyTu2;

	//Xuat day da chuyen snag in thuong
	cout << "\nDay in thuong: " << inThuong(kyTu2);


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
