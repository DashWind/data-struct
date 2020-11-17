//
// Created by F7689454 on 2020/11/17.
//

#include "SqStack.h"

// 初始化
void InitStack(SqStack &S) {
    S.top = -1;
}

// 判栈空
bool StackEmpty(SqStack S) {
    if (S.top == -1)
        return true;
    else
        return false;
}

// 进栈
bool Push(SqStack &S, int x) {
    if (S.top == MaxSize - 1)
        return false;
    S.data[++S.top] = x;
    return true;
}

// 出栈
bool Pop(SqStack &S, int &x) {
    if (S.top == -1)
        return false;
    x = S.data[S.top--];
    return true;
}

// 读栈顶元素
bool GetTop(SqStack S, int &x) {
    if (S.top == -1)
        return false;
    x = S.data[S.top];
    return true;
}


