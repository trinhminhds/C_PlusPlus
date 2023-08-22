#include <iostream>
using namespace std;

//Bai Toan: Nhap danh sach lien ket don cac so nguyen. Tim gia tri lon nhat trong danh sach
// KHAI BAO CAU TRUC DANH SACH LIEN KET DON CAC SO NGUYEN

struct node
{
	int data; //du lieu chua trong 1 cai node
	struct node *pNext;  //con tro de lien ket voi cac node
};

typedef struct node NODE; //thay the struct node thanh NODE

// khai bao cau truc cua danh sach lien ket don
struct list
{
	NODE* pHead; //node quan li dau danh sach
	NODE* pTail; //node quan li cuoi danh sach
};

typedef struct list LIST; //thay the struct list thanh LIST


//KHOI TAO CAU TRUC DANH SACH LIEN KET DON CAC SO NGUYEN
void khoiTao(LIST  &l) {
	// cho 2 node tro den NULL vi danh sach lien ket chua co phan tu
	l.pHead = NULL;
	l.pTail = NULL;
}

NODE *khoiTaoNODE(int x) {

	NODE *p = new NODE; //cap phat vung nho cho NODE p
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat !";
		return NULL;
	}
	p->data = x;  //truyen gia tri x vao cho data
	p->pNext = NULL; // dau tien khai bao node do chua co lien ket den node nao het ->con tro se tro den NULL;
	return p;
}

// Ham them node vao dau danh sach lien ket
void themVaoDau(LIST &l,NODE *p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;//node dau cung chinh la node cuoi va la p
	}
	else
	{
		p->pNext = l.pHead;// cho con tro cua node can them la node lien ket den node dau - pHead
		l.pHead = p;// cap nhat lai pHead chinh la node p
	}
}

//Ham them node p vao cuoi danh sach lien ket
void themVaoCuoi(LIST& l, NODE* p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;//node dau cung chinh la node cuoi va la p
	}
	else
	{
		l.pTail->pNext = p; // cho con tro cua pTail lien ket voi node p
		l.pTail = p; // cap nhat lai p  la node pTail
	}
}

// ham xuat danh sach lien ket don
void xuatDanhSach(LIST l) {
	// for (short i = 0; i < n; i++)
	for (NODE* k = l.pHead; k != NULL; k = k->pNext) {
		cout << k->data << " ";
	}
}

//Ham tim max
short timMax(LIST l) {
	short max = l.pHead->data;
	for (NODE* k = l.pHead->pNext; k != NULL; k = k->pNext)
	{
		if (max < k->data)
			max = k->data;
	}
	return max;
}


int main()
{
	LIST l;
	khoiTao(l);// khoi tao danh sach lien ket don
    

	int n;
	cout << "\nNhap so luong node can them: ";
	cin >> n;
	for (short i = 1; i <= n; i++) {
		int x;
		cout << "Nhap gia tri so nguyen: ";
		cin >> x;
		NODE* p = khoiTaoNODE(x); // khoi tao 1 cai node so nguyen
		themVaoCuoi(l, p);// them node lai p laf mnode pTail
	}

	cout << "\nDanh sach lien ket don\n";
	xuatDanhSach(l);

	cout << "\nGia tri lon nhat: " << timMax(l);

	return 0;
}

