//
// Created by F7689454 on 2020/11/17.
//
#include "BiTree.h"

void InitQueue(Queue &Q) {
    Q.rear = Q.front = 0;
}


bool QueueEmpty(Queue Q) {
    if (Q.rear == Q.front)
        return true;
    else
        return false;
}

bool EnQueue(Queue &Q, BiTree p) {
    if ((Q.rear + 1) % MaxSize == Q.front)
        return false;
    Q.data[Q.rear] = p;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

bool DeQueue(Queue &Q, BiTree &x) {
    if (Q.rear == Q.front)
        return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}
