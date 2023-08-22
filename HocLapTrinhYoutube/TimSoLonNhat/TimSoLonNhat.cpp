
#include <iostream>
using namespace  std;

int main()
{
	int a, b, c;
	cout << "Tim so lon nhat: \n";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Ba so bang nhau" << "\nGia tri max: "<< a && b && c;

	else {
		int max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		cout << "Gia tri max " << max << endl;
	}
	

   
}

