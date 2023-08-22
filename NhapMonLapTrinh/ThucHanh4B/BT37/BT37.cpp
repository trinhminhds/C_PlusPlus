#include <iostream>
using namespace std;

int main()
{
    int a[10][10], m, n;
    cout << "Nhap vao so hang m: ";
    cin >> m;
    cout << "Nhap vao so cot n: ";
    cin >> n;

    //Nhap
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    //xuat
    cout << "Ma tran vua nhap: \n";
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << "\n";
    }

    short bay = 0;
        for (short i = 0; i < n; i++) {
            for (short j = 0; j < n; j++) {
                if (i == j && a[i][j] != 1) {
                    bay != 1;
                   
                }
                else if (i != j && a[i][j] != 0) {
                    bay != 0;
                }
                
            }
           
        }
        cout << "\n\n" << bay;
        
       

        short demSo = 0;
        for (short i = 0; i < m; i++)
            for (short j = 0; j < n; j++)
                if (a[i][j] == 0)
                    demSo++;
                else
                    cout << " ";
        cout << "\nCo " << demSo << " So 0 xuat hien trong ma tran\n";
        

        int tongDuong;
        for (short i = 0; i < n; i++) {
            tongDuong = 0;
            for (short j = 0; j < n; j++)
                if (a[i][j] > 0)
                    tongDuong += a[i][j];
            
            cout << "\nTong phan tu duong trong ma tran: " << tongDuong;
        }
       
        
        int tongAm;
        for (short i = 0; i < n; i++) {
            tongAm = 0;
            for (short j = 0; j < n; j++)
                if (a[i][j] < 0)
                    tongAm += a[i][j];
            
            cout << "\n\nTong phan tu am trong ma tran: " << tongAm;
            
        }
        
       






}

        
    
