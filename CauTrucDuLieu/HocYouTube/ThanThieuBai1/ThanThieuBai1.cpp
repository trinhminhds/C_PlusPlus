
#include <iostream>
using namespace std;

//TAO STACK TU MANG MOT CHIEU
struct node {
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
    if (p == NULL)
    {
        cout << "\nBo nho khong du de cap phat !";
        return NULL;
    }

    p->data = x;
    p->next = NULL;
    return p;
}

void themVaoDau(LIST& l, NODE* p)
{
    if (l.heat == NULL) {
        l.heat = l.tail = p;
    }
    else
    {
        p->next = l.heat;
        l.heat = p;
    }
}

void themVaoDau(LIST& l, NODE* p)
{
    if (l.heat == NULL) {
        l.heat = l.tail = p;
    }
    else
    {
        l.tail = p->next;
        l.tail = p;
    }
}

void xuatDanhSach(LIST l) {
    for (NODE* k = l.heat; k != NULL; k = k->next) {
        cout << k->data << " ";
    }
}



int main()
{
  

    return 0;
    
}

