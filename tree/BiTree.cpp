//
// Created by F7689454 on 2020/11/17.
//

#include <cstdlib>
#include <iostream>
#include "BiTree.h"


// 建立一个二叉树
BiTree InitBiTree() {
    BiTree T = (BiTree)malloc(sizeof(BiTNode));
    T->data = 1;
    auto node2 = (BiTNode *)malloc(sizeof(BiTNode));
    node2->data = 2;
    T->lchild = node2;
    auto node3 = (BiTNode *)malloc(sizeof(BiTNode));
    node3->data = 3;
    T->rchild = node3;
    auto node4 = (BiTNode *)malloc(sizeof(BiTNode));
    node4->data = 4;
    node2->rchild = node4;
    auto node5 = (BiTNode *)malloc(sizeof(BiTNode));
    node5->data = 5;
    node3->rchild = node5;
    auto node6 = (BiTNode *)malloc(sizeof(BiTNode));
    node6->data = 6;
    node4->lchild = node6;

    return T;
}

// 访问一个二叉树结点
void visit(BiTree p) {
    std::cout << p->data << std::endl;
}

// 先序遍历
void PreOrder(BiTree T) {
    if (T != nullptr) {
        visit(T);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void PreOrder2(BiTree T) {
    Stack S;
    InitStack(S);
    BiTree p = T;
    while (p || !StackEmpty(S)) {
        if (p) {
            visit(p);
            Push(S, p);
            p = p->lchild;
        } else {
            Pop(S, p);
            p = p->rchild;
        }
    }
}

// 中序遍历
void InOrder(BiTree T) {
    if (T != nullptr) {
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}

// 中序遍历非递归
void InOrder2(BiTree T) {
    Stack S;
    InitStack(S);
    BiTree p = T;
    while (p || !StackEmpty(S)) {
        if (p) {
            Push(S, p);
            p = p->lchild;
        } else {
            Pop(S, p);
            visit(p);
            p = p->rchild;
        }
    }
}

// 后序遍历
void PostOrder(BiTree T) {
    if (T != nullptr) {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        visit(T);
    }
}


void LevelOrder(BiTree T) {
    Queue Q;
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T);
    while (!QueueEmpty(Q)) {
        DeQueue(Q, p);
        visit(p);
        if (p->lchild)
            EnQueue(Q, p->lchild);
        if (p->rchild)
            EnQueue(Q, p->rchild);
    }
}

