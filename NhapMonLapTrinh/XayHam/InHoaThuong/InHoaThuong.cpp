
#include <iostream>
using namespace std;

char* inHoa(char a[]);
char* inThuong(char a[]);


int main()
{
	char kytu1[100], kytu2[100];
	cout << "Nhap day ky tu in Hoa: ";
	cin.getline(kytu1, 40);

	cout << "Nhap day ky tu in Thuong: ";
	cin.getline(kytu2, 40);

	cout << "Day vua nhap: " << kytu1;
	cout << "\nDay in Hoa: " << inHoa(kytu1);

	cout << "\n\nDay vua nhap: " << kytu2;
	cout << "\nDay in Thuong: " << inThuong(kytu2);


   
}

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
	chuoiTam[i] = '\0'; 
	return chuoiTam;

}

char* inThuong(char a[]) {
	char chuoiTam1[200];
	short i = 0;
	while (a[i]!= '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			chuoiTam1[i] = a[i] + 32;
		else
			chuoiTam1[i] = a[i];
		i++;
	}
	chuoiTam1[i] = '\0';
	return chuoiTam1;
}