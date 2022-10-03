#include <stdio.h>
#include <stdlib.h>
typedef struct LNode{
    int data;
    struct LNode* next;
} LNode, *LinkList;

LNode *p = (LNode *)malloc(sizeof(LNode));

LNode *GetElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L->next;
    if (i = 0)
        return L;
    else if (i < 1) return NULL;
    while (p != NULL && j < 1){
        p = p->next;
        j++;
    }
    return p;
}
LinkList insertNode(LinkList &L) {
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != false) {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", x);
    }
    return L;
}

int main(){
    LinkList L;
    insertNode(L);
    return 0;
}