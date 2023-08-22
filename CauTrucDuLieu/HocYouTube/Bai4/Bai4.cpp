
#include <iostream>
using namespace std;

int n = 0;
struct node {
    int data;
    struct node* next;
};
 
typedef struct node NODE;

struct list {
    NODE* heat;
    NODE* tail;
};

typedef struct list LIST;
    
void khoiTaoDanhSach(LIST& l) {
    l.heat = NULL;
    l.tail = NULL;
}

NODE* khoiTao(int x) {
    NODE* p = new NODE;
    if (p == NULL) {
        cout << "\nBo nho khong ddu de cap phat !";
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
    for (NODE* k = l.heat; k != NULL; k = k->next)
        cout << k->data << " ";
}

void themNodeQVaoSau(LIST& l, NODE* p) {
    int x;
    cout << "\nNhap gia tri node q can them vao sau: ";
    cin >> x;
    NODE* q = khoiTao(x);
    if (q->data == l.heat->data && l.heat->next == NULL) {
        themVaoCuoi(l, p);
    }
    else {
        
        for (NODE* k = l.heat; k != NULL; k = k->next) {
            if (q->data == k->data) {
                NODE* h = khoiTao(p->data);
                NODE* g = k->next;
                h->next = g;
                k->next = h;
            }
            
        }
    }

}

void themNodeQVaoTruoc(LIST& l, NODE* p) {
    int x;
    cout << "\nNhap gia tri node q can them vao truoc: ";
    cin >> x;
    NODE* q = khoiTao(x);
    if (q->data == l.heat->data && l.heat->next == NULL) {
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

void themNodeQViTriBatKi(LIST& l, NODE* p,int vt) {
    if (l.heat == NULL || vt == 1) {
        themVaoDau(l, p);
    }
    else if (vt == n + 1) {
        themVaoCuoi(l, p);
    }
    else {
        int dem = 0;
        NODE* g = new NODE;
        for (NODE* k = l.heat; k != NULL; k = k->next) {
            dem++;
            if (dem == vt) {
                NODE* h = khoiTao(p->data);
                h->next = k;
                g->next = h;
                break;
            }
            g = k;
        }
        
    }
        

}

void xoaDau(LIST& l) {
    if (l.heat == NULL) {
        return;
    }
    NODE* p = l.heat;
    l.heat = l.heat->next;
    delete p;
}

void xoaCuoi(LIST& l) {
    if (l.heat == NULL) {
        return;
    }
    if (l.heat->next == NULL) {
        xoaDau(l);
        return;
    }
    for (NODE* k = l.heat; k != NULL; k = k->next)
    {
        if (k->next == l.tail) {
            delete l.tail;
            k->next = NULL;
            l.tail = k;
            return;
        }
    }

}

void xoaNodeNamSauQ(LIST& l,NODE*q) {
    for (NODE* k = l.heat; k != NULL; k = k->next) {
        if (k->data == q->data) {
            NODE* g = k->next;
            k->next = g->next;
            delete g;
        }

    }
}

void xoaNodeBatKi(LIST& l,int x) {
    if (l.heat->data == NULL) {
        return;
    }
    if (l.heat->data == x) {
        xoaDau(l);
        return;
    }
    if(l.tail->data == x) {
        xoaCuoi(l);
        return;
    }

    NODE* g = new NODE;
    for (NODE* k = l.heat; k != NULL; k = k->next) {
        if (k->data == x) {
            g->next = k->next;
            delete k; 
            return;
        }
        g = k;
    }

}

void giaiPhongDanhSach(LIST& l) {
    NODE* k = NULL;
    while (l.heat != NULL) {
        k = l.heat;
        l.heat = l.heat->next;
        delete k;
    }
}

void menu(LIST l) {
    int luaChon;
    while (69) {
        
        cout << "\n\t-----------------MENU-----------------";
        cout << "\n\t   1.Them node vao danh sach";
        cout << "\n\t   2.Xuat danh sach lien ket don";
        cout << "\n\t   3.Them q vao sau danh sach";
        cout << "\n\t   4.Them q vao truoc danh sach";
        cout << "\n\t   5.Them q vao vi tri bat ki trong danh sach";
        cout << "\n\t   6.Xoa Dau";
        cout << "\n\t   7.Xoa Cuoi";
        cout << "\n\t   8.Xoa Node nam sau q: ";
        cout << "\n\t   9.Xoa Node k: ";
        cout << "\n\t   0.Thoat";
        cout << "\n\t-----------------END-----------------";

        cout << "\nNhap lua chon: ";
        cin >> luaChon;
        if (luaChon < 0 || luaChon > 10) {
            cout << "\nNhap sai moi nhap lai: ";
        }
        if (luaChon == 1) {
            n++;
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
            int x; 
            cout << "\nNhap so can them vao danh sach: ";
            cin >> x;
            NODE* p = khoiTao(x);
            themNodeQVaoSau(l, p);
            

        }

        else if (luaChon == 4) {
            int x;
            cout << "\nNhap so can them vao danh sach: ";
            cin >> x;
            NODE* p = khoiTao(x);
            themNodeQVaoSau(l,p);
            
        }

        else if (luaChon == 5) {
            int x;
            cout << "\nNhap gia tri node p: ";
            cin >> x;
            NODE* p = khoiTao(x);

            int vt;
            do {
                cout << "\nNhap vi tri can them node p: ";
                cin >> vt;
                if (vt<1 || vt>n + 1) {
                    cout << "\nVi tri can them khong co trong danh sach";
                }
            } while (vt < 1 || vt> n + 1);
            themNodeQViTriBatKi(l, p, vt);
            n++;
        }

        else if (luaChon == 6) {
            xoaDau(l);
        }

        else if (luaChon == 7) {
            xoaCuoi(l);
        }

        else if (luaChon == 8) {
            int x;
            cout << "\nNhap gia tri node q can xoa o sau: ";
            cin >> x;

            NODE* q = khoiTao(x);
            xoaNodeNamSauQ(l, q);

        }

        else if (luaChon == 9) {
            int x;
            cout << "Nhap vao Node k: ";
            cin >> x;
            xoaNodeBatKi(l, x);
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
    giaiPhongDanhSach(l);

    return 0;
}

