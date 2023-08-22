
#include <iostream>
using namespace std;

int main()
{
    short i,j, n;
    cout << "Tinh A= 1!+2!+3!+...+n!\n";
    cout << "Tinh A= 1+2+3+...+n\n";
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    short gt = 1, gt1 = 1;
    short S = 0, S1 = 0,S2 = 0;
    
    for (i = 1; i <= n; i++)
        gt *= i;
        S1 += gt;

    for (j = 1; j <= n; j++) 
        S2 += j;
        
    
    S = S1 / S2;
    cout << S ;
    
 
    
}


