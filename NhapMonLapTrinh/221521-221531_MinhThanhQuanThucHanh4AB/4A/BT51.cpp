
#include <iostream>
using namespace std;

int main()
{
        int a[100], n;
        float sum = 0;
        int demSo = 0;
        cout << "Nhap so luong phan tu n: ";
        cin >> n;

        for (short i = 0; i < n; i++) {
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
           
        }

        //Trung Binh cong
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                sum += a[i];
                demSo++;
            }
            
        }
        float average = sum / demSo;
        cout << "\nGia tri trung binh cong cua cac so am trong day " << average ;
        


        //So Nguyen To
        short demUocSo = 0;
        float canBacHai = sqrt(n);
        cout << "\n\nDay so nguyen to: ";
        for (short i = 0; i < n; i++)
            if (a[i] < 2)
                cout << "";
            else if (a[i] == 2)
                cout << a[i] <<"  ";
            else if (a[i] % 2 == 0)
                cout << "";
            else
            {

                for (int j = 3; j <= canBacHai; j = j + 2)
                    if (j % a[i] == 0) {
                        demUocSo++;
                        break;
                    }
                cout  << a[i]<<"  ";

            }



        //Sap xep so chan theo thu tu tang dan
            int tam;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    // Hoan vi 2 so a[i] va a[j]
                    tam = a[i];
                    a[i] = a[j];
                    a[j] = tam;
                }
            }
        }
        cout << "\n\nMang da sap xep theo thu tu tang dan la: ";
        for (int i = 0; i < n; i++) {
            cout << a[i]<<"  ";
        }







        return 0;

}

