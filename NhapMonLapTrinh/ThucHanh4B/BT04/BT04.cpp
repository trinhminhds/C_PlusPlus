
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n;
    cout << "Nhap vao n so hang, so cot cua ma tran vuong: ";
    cin >> n;

    for (short i = 0; i < n; i++) 
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
            cout << "\n";
        }
    

    cout << "cac phan tu nua tam giac tren cua duong cheo chinh trong ma tran vuong: \n";
    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < n; j++) 
            if (i <= j)
                cout << a[i][j] <<"  ";
            
        cout << "\n";
        
        
    }
    
    


    return 0;






}

