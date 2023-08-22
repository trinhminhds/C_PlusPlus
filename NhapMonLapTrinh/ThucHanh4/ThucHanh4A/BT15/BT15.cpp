
#include <iostream>
using namespace std;
int main()
{
    int a[20], n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
  
    short demBoi = 0;
        for (short i = 0; i < n; i++) {
            cout << "Nhap gia tri a[" << i << "]= ";
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] % 3 == 0 && a[i] % 5 == 0) {
                demBoi++;
            }
        }


       
        cout << "Day co " << demBoi << " vua la boi cua 3 va 5" << endl;





        return 0;
    
}

