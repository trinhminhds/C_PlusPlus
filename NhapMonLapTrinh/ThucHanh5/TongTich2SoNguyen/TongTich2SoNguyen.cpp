
#include <iostream>
using namespace std;
int Tong(int a, int b);
int Tich(int x, int y);


int main()
{
    int a = 3, b = 5;
    cout << "Tong: " << Tong(a, b);
    cout << "\nTich" << Tich(a, b);
    cout << "\Tich" << Tich(8, 7);
}

int Tong(int a, int b)
{
    int KetQua;
    KetQua = a + b;
    return KetQua;
}


int Tich(int x, int y){
    return x * y;
}

