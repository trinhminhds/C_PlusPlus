#include <iostream>
using namespace std;
int main() {
	int a[10][10], m, n,dem=0;
	cout << "Chuong trinh dem cac gia tri cuc dai trong ma tran so nguyen";
	cout << "\nNhhap so hang m: ";
	cin >> m;
	cout << "Nhap so cot n: ";
	cin >> n;

	//Nhap ma tran a[m][n]
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	//Xuat ma tran
	cout << "Ma tran vua nhap: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	
    //Đếm số phần tử cực đại
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int max = a[i][j];
            bool imax = true;

            //Kiểm tra các phần tử lân cận cùng hàng
            for (int k = j - 1; k <= j + 1; k++) {
                if (k >= 0 && k < m && k != j) {
                    if (a[i][k] > max) {
                        imax = false;
                        break;
                    }
                }
                
            }

            //Kiểm tra các phần tử lân cận cùng cột
            for (int k = i - 1; k <= i + 1; k++) {
                if (k >= 0 && k < n && k != i) {
                    if (a[k][j] > max) {
                        imax = false;
                        break;
                    }
                }
                    
                
            }

            if (imax) {
                dem++;
            }
        }
    }

    //In kết quả
    cout << "So phan tu cuc dai la: " << dem;
    
}