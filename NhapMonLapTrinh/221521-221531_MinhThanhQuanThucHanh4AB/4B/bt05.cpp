
#include <iostream>
using namespace std;
int main()
{
    int a[10][10], h;
    cout << "chieu cao h cua tam giac Pascal: ";
    cin >> h;
   
        
    for (short i = 0; i < h; i++)
    {
        for (short j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                a[i][j] = 1;
                cout << a[i][j] << " ";
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                cout << a[i][j] << " ";
            }
        }
        cout<< "\n";
    }
    return 0;

}

