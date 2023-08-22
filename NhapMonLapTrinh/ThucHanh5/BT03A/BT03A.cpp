
#include "iostream"
using namespace std;

char* inHoa(char a[]);

int main() {
    // nhap day ky tu 
    char kyTu1[100], kyTu2[100];

    cout << "Nhap day ky tu thu 1 :";
    cin.getline(kyTu1, 40);//nhieu nhat la 40 ky tu 

    //Xuat day ky tu vua nhap 
    cout << "Day vua nhap:" << kyTu1;

    // xuay day da chuyen sang in hoa 
    cout << " \nDay in hoa:" << inHoa(kyTu1);

}

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
// a:97
// 0:48
