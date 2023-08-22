
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Nhap vao mot so nguyen: ";
    cin >> num;

    int reversed_num = 0;
    int original_num = num;

    while (num != 0)
    {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    cout << original_num << " + " << reversed_num << " = " << original_num + reversed_num;

    return 0;
 
}

