//
// Created by F7689454 on 2020/11/17.
//
#include <cstdlib>
#include <ctime>
#include "BiTree.h"

// 随机生成一个BST
BiTree InitBST(int length) {
    BiTree T;
    while (length--) {
        unsigned seed = clock();
        srand(seed);
        int k = (rand() % (50 + 1));
        BSTInsert(T, k);
    }
    return T;
}

int BSTInsert(BiTree &T, int k) {
    if (T == nullptr) {
        T = (BiTree)malloc(sizeof(BiTNode));
        T->data = k;
        T->lchild = T->rchild = nullptr;
        return 1;
    } else if (k == T->data)
        return 0;
    else if (k < T->data)
        return BSTInsert(T->lchild, k);
    else
        return BSTInsert(T->rchild, k);
}


BiTNode *BSTSearch(BiTree T, int k) {
    while (T && k != T->data) {
        if (k < T->data)
            T = T->lchild;
        else
            T = T->rchild;
    }
    return T;
}

