
#include <iostream>
using namespace std;

int main()
{


        int a[20], n;
        cout << "Nhap so luong phan tu n: ";
        cin >> n;

        for (short i = 0; i < n; i++) {
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
        }

        //Xuat day
        cout << "Xuat phan tu am: ";
        for (short i = 0; i < n; i++)
            if (a[i] < 0)
                cout << a[i] << "   ";

       
        double maxChan;
        short bay = 0;
        for (short i = 0; i < n; i++)
            if (a[i] % 2 == 0) {
                maxChan = a[i];//tim phan tu chan dau tien
                bay = 2;
                break;
            }

        if (bay) {
            for (short i = 0; i < n; i++)
                if (a[i] % 2 == 0 && a[i] > maxChan)
                    maxChan = a[i];
            cout << "\nPhan tu am lon nhat" << maxChan;
        }
        

        double maxLe;
        short bay = 0;
        for (short i = 0; i < n; i++)
            if (a[i] % 2 != 0) {
                maxLe = a[i];//tim phan tu le dau tien
                bay = 1;
                break;
            }

        if (bay) {
            for (short i = 0; i < n; i++)
                if (a[i] % 2 != 0 && a[i] > maxLe)
                    maxLe = a[i];
            cout << "\nPhan tu le lon nhat" << maxLe;
        }
        


}










    

