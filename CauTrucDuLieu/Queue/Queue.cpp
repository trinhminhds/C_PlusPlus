#include <iostream>
using namespace std;

/// push them phan tu 

/// pop xoa phan tu dau 

/// front lay ra phan tu dau

/// empty kiem tra queue co rong hay khong

/// back lay phan tu sau

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


void push(int queue[], int ele, int &rear) {
	if (isFull() == false) {
		cout << "\nQueue da day";
	}
	else {
		
		queue[rear] = ele;
		rear++;
	}
}

void pop() {
	if (isEmpty() == true) {
		cout << "\nQueue dang rong";
	}
	else {
		--top;
	}
}

int front(int queue[]) {
     return queue[top];
}

int back(int queue[]) {
	return queue[top - 1];
}


int main()
{
	int Top = -1;
	int Queue[20];
	
	push(Queue, 10);
	push(Queue, 20);
	push(Queue, 30);
	push(Queue, 40);

	while (isEmpty() == false) {
		cout <<"\ntop: "<< front(Queue);
		pop();
	}



	/*queue < int > q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.pop();
	
	cout<<q.back();

	while (!q.empty())
	{
		cout<< q.front() << " ";
		q.pop();
	}*/


}
