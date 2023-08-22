
#include <iostream>
using namespace std;

void doiCho(int& a, int& b);
int main()
{
    int x = 0, y = 1;
    cout << "Truoc khi doi cho: x= " << x << ", y= " << y;
    doiCho(x, y);
    cout << "\nSau khi doi cho: x= " << x << ", y= " << y;

}


void doiCho(int& a, int& b){
int tam; 
    tam = a;
    a = b;
    b = tam;
}