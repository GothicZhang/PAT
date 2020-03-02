#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Merge(List L1, List L2) {
    List l1, l2, l, p;
    p = (List)malloc(sizeof(struct Node));
    l = p;
    l1 = L1->Next;
    l2 = L2->Next;
    while(l1 && l2) {
        if(l1->Data <= l2->Data) {
            l->Next = l1;
            l1 = l1->Next;
        } else {
            l->Next = l2;
            l2 = l2->Next;
        }
        l = l->Next;
    }
    if(l1) l->Next = l1;
    else if(l2) l->Next = l2;
    L1->Next = NULL;
    L2->Next = NULL;
    return p;
}