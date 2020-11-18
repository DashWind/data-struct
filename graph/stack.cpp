//
// Created by F7689454 on 2020/11/17.
//
#include "Graph.h"

void InitStack(Stack &S) {
    S.top = -1;
}

bool Push(Stack &S, VNode p) {
    if (S.top == MaxVertexNum - 1)
        return false;
    S.data[++S.top] = p;
    return true;
}

bool Pop(Stack &S, VNode &x) {
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
