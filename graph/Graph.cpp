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
