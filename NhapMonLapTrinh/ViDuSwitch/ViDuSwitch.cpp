
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap vao mot so tu 0-9: ";
	cin >> a;
	switch (a) {
	case 0:
		cout << "Khong";
		break;
	case 1:
		cout << "mot ";
		break;
	case 2:
		cout << "hai ";
		break;
	case 3:
		cout << "ba ";
		break; 
	case 4:
		cout << "bon ";
		break;
	case 5:
		cout << "nam ";
		break;
	case 6:
		cout << "sau ";
		break;
	case 7:
		cout << "bay ";
		break;
	case 8:
		cout << "tam ";
		break;
	case 9:
		cout << "Chin ";
		break;
	default:
		cout << "Khong phai so 0-9,Nhap sai ";

	}
 
}

