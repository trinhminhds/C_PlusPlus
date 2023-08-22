
#include <iostream>
using namespace std;

int main()
{

        int n;
        cout << "Nhap vao so nguyen duong N: ";
        cin >> n;

        int soTo20000 = n / 20000;
        n = n % 20000;

        int soTo10000 = n / 10000;
        n = n % 10000;

        int soTo5000 = n / 5000;
        n = n % 5000;

        int soTo1000 = n / 1000;

        cout << "So tien doi ra duoc la: " << endl;
        cout << soTo20000 << " to 20.000 dong" << endl;
        cout << soTo10000 << " to 10.000 dong" << endl;
        cout << soTo5000 << " to 5.000 dong" << endl;
        cout << soTo1000 << " to 1.000 dong" << endl;
        
        
}



IDE VS2019

