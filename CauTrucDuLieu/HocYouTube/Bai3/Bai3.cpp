//Ki thuan them 1 node p vao truoc node q
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;

struct list
{
    NODE* heat;
    NODE* tail;

};

typedef struct list LIST;
 
void khoiTaoDanhSach(LIST& l)
{
    l.heat = NULL;
    l.tail = NULL;
}

NODE* khoiTao(int x)
{
    NODE* p = new NODE;
    if (p == NULL) {
        cout << "\nBo nho khong du de cap phat !";
        return NULL;
    }
    p->data = x;
    p->next = NULL;
    return p;
}

void themVaoDau(LIST& l, NODE* p) {
    if (l.heat == NULL) {
        l.heat = l.tail = p;
    }
    else {
        p->next = l.heat;
        l.heat = p;
    }
}

void themVaoCuoi(LIST& l, NODE* p) {
    if (l.heat == NULL) {
        l.heat = l.tail = p;
    }
    else {
        l.tail->next = p;
        l.tail = p;
    }
}

void xuatDanhSach(LIST l) {
    for (NODE* k = l.heat; k !=NULL ; k = k->next) {
        cout << k->data <<" ";
    }
}

//Them vao truoc q
void themNodeq(LIST& l, NODE* p) {
    int y;
    cout << "\nNhap gia tri node q can them vao truoc: ";
    cin >> y;

    NODE* q = khoiTao(y);
    if (q->data == l.heat->data && l.heat->next==NULL) {
        themVaoDau(l, p);
    }
    else {
        NODE* g = new NODE;
        for (NODE* k = l.heat; k != NULL; k = k->next) {
            if (q->data == k->data) {
                NODE* h = khoiTao(p->data);
                h->next = k;
                g->next = h;
            }
            g = k;
        }

    }

}


void menu(LIST& l) {
    int luaChon;
    while (69) {
        cout << "\n\t-----------------MENU-----------------";
        cout << "\n\t    1.Them node vao danh sach";
        cout << "\n\t   2.Xuat danh sach lien ket don";
        cout << "\n\t   3.Them q vao danh sach";
        cout << "\n\t   0.Thoat";
        cout << "\n\t-----------------END-----------------";

        cout << "\nNhap lua chon: ";
        cin >> luaChon;

        if (luaChon < 0 || luaChon > 3) {
            cout << "\nNhap sai lua chon xin nhap lai";
        }
        if (luaChon == 1) {
            int x;
            cout << "\nNhap gia tri so nguyen: ";
            cin >> x;
            NODE* p = khoiTao(x);
            themVaoCuoi(l, p);
        }
        else if (luaChon == 2) {
            cout << "Day vua nhap: ";
            xuatDanhSach(l);
        }
        else if (luaChon == 3) {
            int t;
            cout << "\nNhap gia tri can them vao list: ";
            cin >> t;
            NODE* p = khoiTao(t);
            themNodeq(l,p);
        }
        else {
            break;
        }
    }
}

int main()
{
    LIST l;
    khoiTaoDanhSach(l);
    menu(l);

    return 0;
}
