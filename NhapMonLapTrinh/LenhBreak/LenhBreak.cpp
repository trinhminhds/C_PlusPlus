
#include <iostream>
using namespace std;

int main()
{
	int n, tong;
	tong = 0;
		cout << "Tinh tong 5 so hang hoac it hon neu gap so 0:\n ";
	for (short i = 0; i < 5; i++) {
		cin >> n;
		if (n == 0)
			break;
		tong += n;

	}
	cout << "Tong: " << tong;
	// 5 so hang hoac it hon

}

