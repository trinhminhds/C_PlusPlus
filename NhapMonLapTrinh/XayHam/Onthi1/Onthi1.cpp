
#include <iostream>
using namespace std;

int main()
{
    short a[20], n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    int gt = 1, S = 0;
       
        for (short i = 1; i <= n; i++) {
            gt *= a[i];
            if (a[i] % 2 == 0)
                S += gt;
            else
                S += gt;

        }


}

