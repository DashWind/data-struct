//
// Created by F7689454 on 2020/11/19.
//
#include <cstdlib>
#include <iostream>
#include "LinkList.h"

// 设计一个递归算法，删除不带头结点单链表中所有值为x的结点
LinkList DeleteX(LinkList L, int x) {
    LNode *p;
    if (!L)
        return nullptr;
    if (L->data == x) {
        p = L;
        L = DeleteX(L->next, x);
        free(p);
    } else
        L->next = DeleteX(L->next, x);
    return L;
}

// 找出单链表的环入口
LNode *RingEntrance(LinkList L) {
    LNode *p, *q, *r;
    p = L->next;
    q = L->next->next;
    r = L;
    while (true) {
        if (p != q) {
            p = p->next;
            q = q->next->next;
        } else
            break;
    }
    while (true) {
        if (p != r) {
            p = p->next;
            r = r->next;
        } else
            break;
    }
    return r;
}

// 递增次序输出各结点的值
void IncreaseOut(LinkList L) {
    std::string str;
    while (L->next != nullptr) {
        LNode *p, *q, *r, *s;   // 分别用三个指针指向最小值得前一个结点和最小值结点，r指向当前比较结点,s指向当前值得前一个结点
        q = s = L;
        p = r = L->next;
        while (r) {
            if (r->data < p->data) {
                p = r;
                q = s;
            } else {
                r = r->next;
                s = s->next;
            }
        }
        q->next = p->next;
        str.append(std::to_string(p->data).append(" -> "));
        free(p);
    }
    std::cout << str << std::endl;
}

// 将一个单链表分割为奇数位置链表，偶数位置链表, 带头结点
void SpiltLinkList(LinkList L, LinkList A, LinkList B) {
    LinkList H = (LinkList)malloc(sizeof(LNode));
    H->next = L;    // 加入一个头结点

//    LinkList A = (LinkList)malloc(sizeof(LNode));
//    LinkList B = (LinkList)malloc(sizeof(LNode));

    LNode *p = H->next, *r = A, *s = B;
    int i = 0;
    while (p != nullptr) {
        if (i % 2 == 1) {
            s->next = p;
            s = s->next;
            p = p->next;
            s->next = nullptr;
        }
        else {
            r->next = p;
            r = r->next;
            p = p->next;
            r->next = nullptr;
        }
        i++;
    }
    free(H);
}


