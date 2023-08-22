#include <iostream>
#include <algorithm>
using namespace std;


bool sapXep(int a, int b) {
    if (a % 2 == 1 && b % 2 == 1) {
        return a < b;
    }
    else if (a % 2 == 0 && b % 2 == 0) {
        return a > b;
    }
    else if (a % 2 == 1 && b % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a[20], n;
    cout << "Nhap vao so phan tu n: ";
    cin >> n;
 
    //Nhap
    for (short i = 0; i < n; i++) {
        cout << " a[" << i << "]=";
        cin >> a[i];
    }

    cout << "\nDay vua nhap: ";
    for (short i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
  

    std::sort(a, a + n, sapXep);
    cout << "\nDay sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
//1:52 PM 4/16/2023 test xong
