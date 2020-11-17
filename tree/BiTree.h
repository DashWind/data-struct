//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_BITREE_H
#define DATA_STRUCT_BITREE_H

#define MaxSize 50

typedef struct BiTNode {
    int data;
    BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

struct Stack {
    BiTree data[MaxSize];
    int top;
};

struct Queue {
    BiTree data[MaxSize];
    int rear, front;
};

BiTree InitBiTree();
void visit(BiTree p);
void PreOrder(BiTree T);
void PreOrder2(BiTree T);
void InOrder(BiTree T);
void InOrder2(BiTree T);
void PostOrder(BiTree T);
void LevelOrder(BiTree T);  // 层次遍历

void InitStack(Stack &S);
bool Push(Stack &S, BiTree p);
bool Pop(Stack &S, BiTree &x);
bool StackEmpty(Stack S);

void InitQueue(Queue &Q);   // 初始化队列
bool QueueEmpty(Queue Q);   // 判断队列为空
bool EnQueue(Queue &Q, BiTree p);   // 入队
bool DeQueue(Queue &Q, BiTree &x);  // 出队


int BSTInsert(BiTree &T, int k);
BiTree InitBST(int length);

#endif //DATA_STRUCT_BITREE_H
