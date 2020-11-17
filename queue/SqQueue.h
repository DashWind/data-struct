//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_SQQUEUE_H
#define DATA_STRUCT_SQQUEUE_H


#define MaxSize 50
struct SqQueue {
    int data[MaxSize];
    int rear, front;
};

void InitQueue(SqQueue &Q);
bool isEmpty(SqQueue Q);
bool EnQueue(SqQueue &Q, int x);
bool DeQueue(SqQueue &Q, int &x);

#endif //DATA_STRUCT_SQQUEUE_H
