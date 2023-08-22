#include<iostream>
using namespace std;

int main() {
	static int a;
	short b;
	do {
		b = a++ + 3;
		b *= 6;
		a += b % 7;
		cout << a << " " << b << " ";
	} while (a < 11);
}