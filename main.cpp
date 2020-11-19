#include <iostream>
//#include "SqList/SqList.h"
//#include "LinkList/LinkList.h"
//#include "tree/BiTree.h"
//#include "graph/Graph.h"
//#include "search/search.h"
#include "sort/sort.h"

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
//    LinkList L = LinkListTailInsert(20);
//    LNode *p = LocateElem(L, 4);
//    PrintLinkList(L);
//    std::cout << p->data << std::endl;
//    std::cout << p->next->data << std::endl;

//    BiTree T = InitBST(6);
//    PreOrder(T);
//    std::cout << "\n";
//    InOrder(T);
//    LevelOrder(T);

//    ALGraph G = InitUndirectedGraph();
//    BFSTraverse(G);
//    BFSMinDistance(G, 1);
//    DFSTraverse(G);

//    SSTable T = InitTable(20);
//    PrintTable(T);
//    BinSearch(T, 10);

    SqList L = InitSortTable(90000);
    PrintSortTable(L);
//    BubbleSort(L);
//    QuickSort(L, 1, L.length - 1);
//    BuildMaxHeap(L);
    HeapSort(L);
    PrintSortTable(L);
}
