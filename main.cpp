#include <iostream>
#include "SqList/SqList.h"
#include "LinkList/LinkList.h"


int main() {

//    SqList L;
//    SqList L1 = ListInit(10);
//    SqList L2 = ListInit(15);
//    PrintList(L1);
//    PrintList(L2);
//    ReverseList(L);
//    DeleteXList(L, 1);
//    ListSort(L1);
//    ListSort(L2);
//    SortListMerge(L1, L2, L);
//    PrintList(L1);
//    PrintList(L2);
//    PrintList(L);

//    LinkList L = LinkListHeadInsert(5);
    LinkList L = LinkListTailInsert(20);
    LNode *p = LocateElem(L, 4);
    PrintLinkList(L);
    std::cout << p->data << std::endl;
    std::cout << p->next->data << std::endl;
}