//Bai 19

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
    short bay = 0, viTri;

    for (short i = 0; i < n; i++) {
        
        for (short j = 2; j <= sqrt(a[i]); j++) {
            {
                if (a[i] % j == 0)
                    
                cout << i;
              
                break;
            }
            cout << i;
        }
      
    }
    

}



