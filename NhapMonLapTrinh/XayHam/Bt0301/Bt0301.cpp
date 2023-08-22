
#include <iostream>
using namespace std;

void inPut(short a[], short n);
void outPut(short a[], short n);
short minElement(short a[], short n);
short minPsitiveElement(short a[], short n);
short sumPsitiveEvenPositions(short a[], short n);
void splitrange(short a[], short n, short b[], short& m, short c[], short& k);
short insertElement(short a[], short n, short x, short k);


int main()
{
    short b[20], m;
    cout << "Enter the number of molecular: ";//Nhap vao so luong phan tu
    cin >> m;

    inPut(b, m);

    cout << "The sequence just entered: ";// Day vua nhap
    outPut(b, m);
    minElement(b, m);//Phan tu nho nhat

   
    short minP = minPsitiveElement(b, m);
    if (minP > 0)
        cout << "\nMin psitive element: " << minP;// Phan tu duong nho nhat
    else
        cout << "\nNo slightest positive value";//Khong co gia tri duong nho nhat

    sumPsitiveEvenPositions(b, m);//Tong phan tu duong o vi tri chan

    short evenNumber[20], OddNumber[20];
    short  evenNumberOfElements, oddNumberOfElements;
    splitrange(b, m, evenNumber, evenNumberOfElements, OddNumber, oddNumberOfElements);

    cout << "\nRange even number: ";//Day so chan
    outPut(evenNumber, evenNumberOfElements);

    cout << "\nRange odd number:  ";// Day so le
    outPut(OddNumber, oddNumberOfElements);

    short x = 10, k = 3;
    short resultinsert;
    resultinsert = insertElement(b, m, x, k);
    if (resultinsert == -1)
        cout << "\nInsert failure";// Chen that bai
    else {
        cout << "\nResult insert: "; //Ket qua chen
        outPut(b, m + 1);
    }
}
void inPut(short a[], short n) {
    for (short i = 0; i < n; i++) {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}
void outPut(short a[], short n) {
    for (short i = 0; i < n; i++)
        cout << a[i]<< " ";
}

short minElement(short a[], short n) {
    short min = a[0];
    for (short i = 0; i < n; i++)
        if (a[i] < min)
            min = a[i];
    cout << "\nSmallest element: " << min;//Phan tu nho nhat
    return min;
}

//Min  
short minPsitiveElement(short a[], short n) {
    short minPElement = a[0];
    short trap = 0;

    for (short i = 0; i < n; i++)
        if (a[i] > 0) {
            trap = 1;
            break;
        }
    if (trap)
        for (short i = 0; i < n; i++)
            if (a[i] > 0 && a[i] < minPElement)
                minPElement = a[i];
                
    return minPElement;
}

//Sum psitive even positions
short sumPsitiveEvenPositions(short a[], short n) {
    short sum = 0;
    for (short i = 0; i < n; i += 2)
        if (a[i] > 0)
            sum += a[i];

    cout << "\nSum psitive even positions: " << sum;//tong phan tu duong tai vi tri chan
    return sum;
}

//Split two range
void splitrange(short a[], short n, short b[], short& m, short c[], short& k) {
    m = k = 0;

    for (short i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            b[m++] = a[i];
        else
            c[k++] = a[i];
}

//insert Element
short insertElement(short a[], short n, short x, short k) {

    if (k<0 || k>n - 1)
        return -1;
    for (short i = n; i > k; i--)
        a[i] = a[i - 1];
    a[k] = x;
    return 1;


}


