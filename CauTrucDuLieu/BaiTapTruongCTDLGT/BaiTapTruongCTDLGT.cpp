#include<iostream>
using namespace std;

//BAI TAP DE QUY

//1. tinh p(n) = x^n,n nguyen va n >= 1;


//2. tinh n! (n nguyen va n >= 0)
short gt(short n);

//3. tinh uoc so chung lon nhat bang de quy
short usc(short n, short k);
//4.
short bai4(short n);

// 5
short binpow(short n, short k);

// bai 6
short tongN(short n);
long tong(short a[], short n);
//bai 7
void thap(short n, char a, char b, char c);


int main() {

	short m,k;
	cout <<"Nhap n: ";
	cin >> m;
	cout << "Nhap k: ";
	cin >> k;

	/*cout << "Giai thua: " << gt(m) << endl;
	cout << "Uoc so chung lon nhat: " << usc(m,k) << endl;*/
	/*cout << "Tinh 1/2 + 2/3 + 3/4 ... n/( n + 1 ): " << bai4(m) << endl;*/
	//cout << "Luy thua: " << binpow(m, k) << endl;
	//cout << "Tong N: " << tongN(m) << endl;
	cout << "thap: ";
	thap(m, 'A', 'B', 'C');
	return 0;
}


short gt(short n) {
	if (n == 0)
		return 1;
	else
		return n * gt(n - 1);
}

short usc(short n, short k) {
	if (k == 0)
		return n;
	else
		return usc(k, n % k);
}

short bai4(short n) {
	if (n == 1)
		return 1 / 2;
	else
		return  bai4(n - 1) + n / (n + 1);

}

short binpow(short n, short k) {
	if (k == 0)
		return 1;
	short x = binpow(n, k / 2);
	if (k % 2 == 1)
		return n * x * x;
	else
		return x * x;
}

short tongN(short n) {
	if (n == 0)
		return n;
	else
		return n + tongN(n - 1);
}

void thap(short n, char a, char b, char c) {
	if (n == 1) {
		cout << a << " sang " << c << "\n";
		return;
	}
	thap(n - 1, a, c, b);
	cout << a << " sang " << c << "\n";
	thap(n - 1, b, a, c);

}

