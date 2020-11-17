//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_LINKLIST_H
#define DATA_STRUCT_LINKLIST_H

typedef struct LNode {
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList LinkListHeadInsert(int length);
LinkList LinkListTailInsert(int length);
LNode *GetElem(LinkList L, int i);
LNode *LocateElem(LinkList L, int e);
void PrintLinkList(LinkList L);

#endif //DATA_STRUCT_LINKLIST_H
