//
// Created by F7689454 on 2020/11/17.
//
#include "Graph.h"

void InitQueue(Queue &Q) {
    Q.rear = Q.front = 0;
}


bool QueueEmpty(Queue Q) {
    if (Q.rear == Q.front)
        return true;
    else
        return false;
}

bool EnQueue(Queue &Q, int v) {
    if ((Q.rear + 1) % MaxVertexNum == Q.front)
        return false;
    Q.data[Q.rear] = v;
    Q.rear = (Q.rear + 1) % MaxVertexNum;
    return true;
}

bool DeQueue(Queue &Q, int &x) {
    if (Q.rear == Q.front)
        return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxVertexNum;
    return true;
}
