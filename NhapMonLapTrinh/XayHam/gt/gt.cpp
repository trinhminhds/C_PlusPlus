
#include <iostream>
using namespace std;

int main()
{
    short n, i;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n ;

    int gt = 1, S = 0;
    for (i = 0; i <= n; i++)
        gt *= i;
    if (i % 2 == 1)
        S -= gt;
    else
        S += gt;

    cout << "Tinh S = -1!";



    
}

