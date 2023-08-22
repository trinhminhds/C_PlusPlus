#include <iostream>
using namespace std;

///Push: Thêm một phần tử vào đỉnh của ngăn xếp, số phần tử của ngăn xếp tăng lên 1.
 
///Pop : Xóa bỏ phần tử đầu tiên ở đỉnh của ngăn xếp, số phần tử của ngăn xếp giảm đi 1.

///Top : Lấy giá trị của phần tử đầu tiên ở đỉnh của ngăn xếp, số phần tử của ngăn xếp không thay đổi.

///IsEmpty : Kiểm tra ngăn xếp trống hay không.Ngăn xếp trống là ngăn xếp không có phần tử nào.

///IsFull : Kiểm tra ngăn xếp đã đầy hay chưa.Thao tác này không phải lúc nào cũng có.

///Size : Lấy số lượng phần tử stack đang có.
int top = -1;

bool isEmpty() {
	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
	
}

bool isFull() {
	if (top >= -1) {
		return true;
	}
	else {
		return false;
	}
}

void push(int Stack[],int val) {
	if (!isEmpty()) {
		cout << "\nStack da day";
	}
	else {
		++top;
		Stack[top] = val;
	}
}

void pop(int Stack[], int val) {
	if (!isEmpty()) {
		--top;
	}
	else {
		cout << "\nStack dang rong";
	}
}

int Top(int Stack[]) {
	return Stack[top];
}

int size(int Stack[]) {
	return top + 1;
}

int main() {
	int top = -1;
	int Stack[20];

	push(Stack, 10);
	cout << Top(Stack);





	
	/*///in ra cac phan tu trong stack
	st.push(10);
	st.push(20);
	st.push(30);
	st.pop();
	cout << st.size() << "\n";
	while (!st.empty()) {
		cout << "\nTop: "<< st.top() << endl;
		st.pop();
	}


	///Kiem tra stack co rong khong
	if (!st.empty()) {
		cout << "True";
	}
	else {
		cout << "False";
	}*/

	/*///----------- Tinh tong cua stack -----------
	int sum = 0;
	st.push(10);
	st.push(20);
	st.push(30);
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << "\nTong stack: "<<sum<<endl;*/


	/*string s;
	getline(cin, s);
	stack <string> sa;
	sa.push(s);*/


	/*while (!sa.empty())
	{
		cout << "\nTop: " << sa.top()<< " ";
		sa.pop();
	}*/

	







	
}