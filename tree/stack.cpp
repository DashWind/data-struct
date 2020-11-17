//
// Created by F7689454 on 2020/11/17.
//
#include "BiTree.h"

void InitStack(Stack &S) {
    S.top = -1;
}

bool Push(Stack &S, BiTree p) {
    if (S.top == MaxSize - 1)
        return false;
    S.data[++S.top] = p;
    return true;
}

bool Pop(Stack &S, BiTree &x) {
    if (S.top == -1)
        return false;
    x = S.data[S.top--];
    return true;
}

// 判栈空
bool StackEmpty(Stack S) {
    if (S.top == -1)
        return true;
    else
        return false;
}
