//
// Created by F7689454 on 2020/11/17.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "LinkList.h"


// 头插法建立链表
LinkList LinkListHeadInsert(int length) {
    LNode *s;
    int x;
    auto L = (LinkList) malloc(sizeof(LNode));
    L->next = nullptr;

    while (length--) {
        unsigned seed = clock();
        srand(seed);
        x = (rand() % (50 + 1));

        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
    }
    return L;
}

// 尾插法
LinkList LinkListTailInsert(int length) {
    int x;
    LinkList L = (LinkList)malloc(sizeof(LNode));

    LNode *s, *r = L;
    while (length--) {
        unsigned seed = clock();
        srand(seed);
        x = (rand() % (50 + 1));

        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
    }
    r->next = nullptr;
    return L;
}

// 查找结点的值
LNode *GetElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L->next;
    if (i == 0)
        return L;
    if (i < 1)
        return NULL;
    while (p && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

// 按值查找元素
LNode *LocateElem(LinkList L, int e) {
    LNode *p = L->next;
    while (p && p->data != e)
        p = p->next;
    return p;
}


// 带头结点打印链表
void PrintLinkList(LinkList L) {
    std::string s;
    L = L->next;
    while (L) {
        s.append(std::to_string(L->data).append(" -> "));
        L = L->next;
    }
    std::cout << s << std::endl;
}

