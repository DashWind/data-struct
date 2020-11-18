//
// Created by F7689454 on 2020/11/17.
//
#include <cstdlib>
#include <iostream>
#include "Graph.h"


// 无向图和有向图邻接表示例
ALGraph InitUndirectedGraph() {
    ALGraph G;
    G.arcnum = 14;
    G.vexnum = 5;

    G.vertices[1].data = '1';
    ArcNode *p = (ArcNode *)malloc(sizeof(ArcNode));
    G.vertices[1].first = p;
    p->adjvex = 2;
    ArcNode *q = (ArcNode *)malloc(sizeof(ArcNode));
    p->next = q;
    q->adjvex = 5;

    G.vertices[2].data = '2';
    p = (ArcNode *)malloc(sizeof(ArcNode));
    G.vertices[2].first = p;
    p->adjvex = 1;
    q = (ArcNode *)malloc(sizeof(ArcNode));
    p->next = q;
    q->adjvex = 5;
    p = (ArcNode *)malloc(sizeof(ArcNode));
    q->next = p;
    p->adjvex = 3;
    q = (ArcNode *)malloc(sizeof(ArcNode));
    p->next = q;
    q->adjvex = 4;

    G.vertices[3].data = '3';
    p = (ArcNode *)malloc(sizeof(ArcNode));
    G.vertices[3].first = p;
    p->adjvex = 2;
    q = (ArcNode *)malloc(sizeof(ArcNode));
    p->next = q;
    q->adjvex = 4;

    G.vertices[4].data = '4';
    p = (ArcNode *)malloc(sizeof(ArcNode));
    G.vertices[4].first = p;
    p->adjvex = 2;
    q = (ArcNode *)malloc(sizeof(ArcNode));
    p->next = q;
    q->adjvex = 5;
    p = (ArcNode *)malloc(sizeof(ArcNode));
    q->next = p;
    p->adjvex = 3;

    G.vertices[5].data = '5';
    p = (ArcNode *)malloc(sizeof(ArcNode));
    G.vertices[5].first = p;
    p->adjvex = 4;
    q = (ArcNode *)malloc(sizeof(ArcNode));
    p->next = q;
    q->adjvex = 1;
    p = (ArcNode *)malloc(sizeof(ArcNode));
    q->next = p;
    p->adjvex = 2;

    return G;
}

void visit(ALGraph G, int v) {
    std::cout << G.vertices[v].data << " -> ";
}

ArcNode *FirstNeighbor(ALGraph G, int v) {
    return G.vertices[v].first;
}

//ArcNode *NextNeighbor(ALGraph G, int v, int w) {
//    G.vertices[v].
//}

// BFS 深度优先遍历
bool visited[6];
void BFSTraverse(ALGraph G) {
    for (int i = 1; i <= G.vexnum; ++i)
        visited[i] = false;         // 将标记数组全部置为false
    Queue Q;
    InitQueue(Q);
    for (int i = 1; i <= G.vexnum; ++i)
        if (!visited[i])
            BFS(G, i, Q);
}
void BFS(ALGraph G, int v, Queue Q) {
    visit(G, v);
    visited[v] = true;
    EnQueue(Q, v);
    while (!QueueEmpty(Q)) {
        DeQueue(Q, v);
        for (ArcNode *w = FirstNeighbor(G, v); w != nullptr; w=w->next) {
            if (!visited[w->adjvex]) {
                visit(G, w->adjvex);
                visited[w->adjvex] = true;
                EnQueue(Q, w->adjvex);
            }
        }
    }
    std::cout << std::endl;
}


// 单源最短路径
void BFSMinDistance(ALGraph G, int u) {
    int d[10];
    for (int i = 0; i <= G.vexnum; ++i) {
        d[i] = 100;
        visited[i] = false;
    }
    visited[u] = true;
    d[u] = 0;
    Queue Q;
    InitQueue(Q);
    EnQueue(Q, u);
    while (!QueueEmpty(Q)) {
        DeQueue(Q, u);
        for (ArcNode *w = FirstNeighbor(G, u); w != nullptr; w = w->next)
            if (!visited[w->adjvex]) {
                visited[w->adjvex] = true;
                d[w->adjvex] = d[u] + 1;
                EnQueue(Q, w->adjvex);
            }
    }
    for (int i = 1; i <= G.vexnum; i++)
        std::cout << d[i] << " ";
    std::cout << std::endl;
}