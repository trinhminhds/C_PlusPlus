#include <iostream>
using namespace std;

void input(short a[], short n);
void output(short a[], short n);
short phanTuNhoNhat(short a[], short n);
short duongNhoNhat(short a[], short n);
short sumDuongViTriChan(short a[], short n);
void tach2day(short a[], short n,short b[],short& m,short c[],short& k);
short chenX(short a[], short n, short k, short x);

int main()
{
	short b[20], m;
	cout << "Enter n: ";
	cin >> m;

	input(b, m);

	cout << "Array a: ";
	output(b, m);

	phanTuNhoNhat(b, m);

	short min = duongNhoNhat(b, m);
	if (min > 0)
		cout << "\nPhan tu duong nho nhat: " << min;
	else
		cout << "\nKhong co phan tu duong";

	 sumDuongViTriChan(b, m);

	 short dayChan[20], dayLe[20];
	 short phanTuChan, phanTuLe;

	 tach2day(b, m, dayChan, phanTuChan, dayLe, phanTuLe);
	 cout <<"\nDay phan tu chan: " ;
	 output(dayChan, phanTuChan);
	 cout << "\nDay phan tu le: " ;
	 output(dayLe, phanTuLe);

	 short x = 10, k = 3;
	 short chen;
	 chen = chenX(b, m, k, x);
	 if (chen == -1)
		 cout << "\nChen that bai";
	 else {
		 cout << "\nKet qua chen: ";
		 output(b, m + 1);
	 }
}

void input(short a[], short n) {
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void output(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}

short phanTuNhoNhat(short a[], short n) {
	short min = a[0];
	for (short i = 0; i < n; i++)
		if (a[i] < min)
			min = a[i];

	cout << "\nPhan tu nho nhat: " << min;
	return min;
}

short duongNhoNhat(short a[], short n) {
	short mins = a[0];
	short bay = 0;

	for (short i = 0; i < n; i++)
		if (a[i] > 0) {
			bay = 1;
			break;
		}
	if (bay)
		for (short i = 0; i < n; i++)
			if (a[i] > 0 && a[i] < mins)
				mins = a[i];


	return mins;
}

short sumDuongViTriChan(short a[], short n) {
	short sum = 0;
	short bay = 0;
	for (short i = 0; i < n; i += 2)
		if (a[i] > 0)
			sum += a[i];


	cout << "\nTong phan tu duong tai vi tri chan: "<< sum;
	return sum;
}

void tach2day(short a[], short n, short b[], short& m, short c[], short& k) {
	k = m = 0;
	for (short i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			b[m++] = a[i];
		else
			c[k++] = a[i];
	
}

short chenX(short a[], short n, short k, short x) {
	if (k<0 || k>n - 1)
		return -1;
	for (short i = n; i > k; i--)
		a[i] = a[i - 1];
	a[k] = x;
	return 1;

}