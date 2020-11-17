//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_LINKQUEUE_H
#define DATA_STRUCT_LINKQUEUE_H

struct LinkNode{
    int data;
    LinkNode *next;
};
struct LinkQueue {
    LinkNode *front, *rear;
};

void InitQueue(LinkQueue &Q);
bool isEmpty(LinkQueue Q);
void EnQueue(LinkQueue &Q, int x);
bool DeQueue(LinkQueue &Q, int &x);

#endif //DATA_STRUCT_LINKQUEUE_H
