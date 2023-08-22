
#include <iostream>
using namespace std;

int main()
{
	int	CSC, CSM, tienThu, thanhTien;
	cout << "Tinh tien dien sinh hoat hang thang";
	cout << "\nNhap vao chi so cu CSC: ";
	cin >> CSC;
	cout << "Nhap vao chi so moi CSM: ";
	cin >> CSM;

	if (CSM < CSC)
		cout << "Ban nhap sai, CSM phai lon hon hoac bang CSC";

	else {
		tienThu = CSM - CSC;
		if (tienThu <= 50)
			thanhTien = tienThu * 1678;
		else if (tienThu <= 50)
			thanhTien = tienThu * 1678 + (tienThu - 50) * 1734;
		else if (tienThu <= 200)
			thanhTien = 50 * 1678 + 50 * 1734 + (tienThu - 100) * 2014;
		else if (tienThu <= 300)
			thanhTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (tienThu - 200) * 2536;
		else if (tienThu <= 400)
			thanhTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (tienThu - 300) * 2834;
		else 
			thanhTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (tienThu - 400) * 2927;

		cout << "\nTieu thu: " << tienThu << "KWh Tien dien phai tra: " << thanhTien *1.1 << "VND";

     }

	
		

}

