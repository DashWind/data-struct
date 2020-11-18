//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_GRAPH_H
#define DATA_STRUCT_GRAPH_H

//#define MaxVertexNum 100
//typedef char VertexType;
//typedef int EdgeType;
//struct MGraph {
//    VertexType Vex[MaxVertexNum];   // 顶点表
//    EdgeType  Edge[MaxVertexNum][MaxVertexNum];     // 邻接矩阵，边表
//    int vexnum, arcnum;     // 当前顶点数和弧数
//};

// 邻接表法
#define MaxVertexNum 10
typedef char VertexType;
typedef int EdgeType;
typedef struct ArcNode {
    int adjvex;             // 边表所指结点位置
    struct ArcNode *next;   // 边表指向下一个边表
} ArcNode;
typedef struct VNode {  // 顶点表结点
    VertexType data;           // 顶点信息
    ArcNode *first;         // 顶点所指第一个边表结点
} VNode, AdjList[MaxVertexNum];
typedef struct {        // 邻接表
    AdjList vertices;
    int vexnum, arcnum;     // 图的顶点数和弧数
} ALGraph;


struct Stack {
    int data[MaxVertexNum];
    int top;
};

struct Queue {
    int data[MaxVertexNum];
    int rear, front;
};

ALGraph InitUndirectedGraph();
void visit(ALGraph G, int v);
void DFS(ALGraph G, int v);
void DFSTraverse(ALGraph G);
ArcNode *FirstNeighbor(ALGraph G, int v);
void BFS(ALGraph G, int v, Queue Q);
void BFSTraverse(ALGraph G);
void BFSMinDistance(ALGraph G, int u);

void InitStack(Stack &S);
bool Push(Stack &S, int p);
bool Pop(Stack &S, int &x);
bool StackEmpty(Stack S);

void InitQueue(Queue &Q);   // 初始化队列
bool QueueEmpty(Queue Q);   // 判断队列为空
bool EnQueue(Queue &Q, int p);   // 入队
bool DeQueue(Queue &Q, int &x);  // 出队

#endif //DATA_STRUCT_GRAPH_H
