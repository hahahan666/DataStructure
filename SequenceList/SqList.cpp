#include <stdio.h>

#define MaxSize 20

typedef struct {
    int data[MaxSize];
    int length;
} SqList;

// function
void InitList(SqList &L);
bool Empty(SqList &L);
bool ListInsert(SqList &L, int i, int e);
bool ListDelete(SqList &L, int i, int e);
int GetElem(SqList &L, int i);
int LocateElem(SqList &L, int e);
bool LocateChangeElem(SqList &L, int e, int em);
bool GetChangeElem(SqList &L, int i, int em);

void PrintSqList(SqList L);
void testModule();

// implements
void InitList(SqList &L){
    for (int i=0; i<MaxSize; i++)
        L.data[i] = 0;
    L.length = 0;
}

bool Empty(SqList L){
    return (L.length == 0);
}

bool ListInsert(SqList &L, int i, int e) {
    if (i < 1 || i > L.length+1)
        return false;
    // judge if the Sequence list is full
    if (L.length >= MaxSize)
        return false;
    // insert the element in Sequence List
    for (int j=L.length; j>=i; j--)
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L, int i, int &e) {
    // judge if the i is legal
    if (i<0 || i>L.length)
        return false;
    //
    for (int j=i; j<=L.length; j++)
        L.data[j-1] = L.data[j];
    L.length--;
    return true;
}

int GetElem(SqList &L, int i) {
    // judge if overload
    if (i<0 || i>L.length)
        return -1;
    return L.data[i-1];
}

int LocateElem(SqList L, int e) {
    //
    for (int i=0; i<L.length; i++){
        if (L.data[i] == e)
            return i + i;
    }
    return -1;
}