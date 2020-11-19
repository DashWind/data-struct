//
// Created by F7689454 on 2020/11/18.
//
#include <iostream>
#include "Graph.h"

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