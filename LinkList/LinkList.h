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
LinkList DeleteX(LinkList L, int x);
LNode *RingEntrance(LinkList L);        // 找出环的入口
void IncreaseOut(LinkList L);           // 递增输出链表元素
void SpiltLinkList(LinkList L, LinkList A, LinkList B);     // 将链表分割

#endif //DATA_STRUCT_LINKLIST_H
