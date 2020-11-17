//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_SQSTACK_H
#define DATA_STRUCT_SQSTACK_H

#define MaxSize 50
typedef struct {
    int data[MaxSize];
    int top;
} SqStack;

void InitStack(SqStack &S);
bool StackEmpty(SqStack S);
bool Push(SqStack &S, int x);
bool Pop(SqStack &S, int &x);
bool GetTop(SqStack S, int &x);

#endif //DATA_STRUCT_SQSTACK_H
