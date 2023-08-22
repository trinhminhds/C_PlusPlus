#include <iostream>
using namespace std;

int main()
{
        int i, n, soBanDau;
        int max = 0;

        do
        {
            cout << "\nNhap vao so nguyen duong n: ";
            cin >> n;
        } while (n < 0 && cout << "So n phai lon hon hoac bang 0");
         soBanDau = n;
        
        if (n == 0)
            max = 0;
    
        do
        {
            i = n % 10;
            if (i > max)
            {
                max = i;
            }
        }  while (n /= 10);

        cout << "So lon nhat trong " << soBanDau << " la: " << max;

        


}

