
#include <iostream>
using namespace std;

void inPut(short a[][10], short m, short n);
void outPut(short a[][10], short m, short n);
short countEvenPositive(short a[][10], short m, short n);
short min(short a[][10], short m, short n);
short smallestPositive(short a[][10], short m, short n);
short maxRowI(short a[][10], short m,short n);

int main()
{
    short b[10][10], x, y;
    cout << "Enter the matrix row number: ";
    cin >> x;
    cout << "Enter the matrix colums number: ";
    cin >> y;

    inPut(b, x, y);
    cout << "Enter the matrix: \n";
    outPut(b, x, y);
    
    countEvenPositive(b, x, y);
    min(b, x, y);

    short min = smallestPositive(b, x, y);
    if (min < 0)
        cout << "\nNo min positive value";
    else
        cout << "\nSmallest positive element: " << min;

    maxRowI(b, x, y);
    
}

void inPut(short a[][10], short m, short n) {
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
}
void outPut(short a[][10], short m, short n) {
    for (short i = 0; i < m; i++) {
        for (short j = 0; j < n; j++)
        cout << a[i][j] << " ";
        cout << "\n";
    }
}

//Count the number of even positive elements
short countEvenPositive(short a[][10], short m, short n) {
    short count = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] > 0 && a[i][j] % 2 == 0)
                count++;

    cout << "\nCount the number of even positive: " << count;
    return count;
}

short min(short a[][10], short m, short n) {
    short min = a[0][0];
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] < min)
                min = a[i][j];

    cout << "\nMin element: " << min;
    return min;
}

//Find the smallest positive element
short smallestPositive(short a[][10], short m, short n) {
    short min = a[0][0];
    short trap = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] < 0) {
                trap = 1;
                break;
            }
    if (trap)
        for (short i = 0; i < m; i++)
            for (short j = 0; j < n; j++)
                if (a[i][j] > 0 && a[i][j] < min)
                    min = a[i][j];

    
    return min;
}

//Find the max element on the row i
short maxRowI(short a[][10], short m,short n) {
    short max = a[0][0];
    short row = 0;
    for (short i = 0; i < m; i++)
        for (short j = 0; j < n; j++)
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
            }

    cout << "\nMax on the row i: " << row;
    return row;
}