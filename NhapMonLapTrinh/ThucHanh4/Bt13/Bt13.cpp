
#include <iostream>
using namespace std;

int main()
{
    int a[20], n;
    cout << "Nhap xuat day 1 chieu duong\n";
    cout << "Nhap vao so phan tu n: ";
    cin >> n;

    for (short i = 0; i < n; i++) {
        cout << " a[" << i << "]=";
        cin >> a[i];
    }

    //Dem phan tu la so ngto
    short bay = 0, soLuongPhanTuNguyenTo = 0;
    
    for (short i = 0; i < n; i++){ 
        bay = 1;
        for (short j = 2; j <= sqrt(a[i]); j++) {
                {
                    if (a[i] % j == 0)
                        bay = 0;

                    break;
                }
          
           

        }
        if (bay)
            soLuongPhanTuNguyenTo++;
    }
    cout << "Day vua nhap: ";
    for (short i = 0; i < n; i++)
    cout << a[i]<< "  ";
    cout << "\nDay tren co "<< soLuongPhanTuNguyenTo <<" phan tu la so nguyen to";


}
    


