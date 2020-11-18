//
// Created by F7689454 on 2020/11/18.
//
#include "Graph.h"

bool visited2[10];
void DFSTraverse(ALGraph G) {
    for (int v = 0; v <= G.vexnum; ++v)
        visited2[v] = false;
    for (int v = 0; v < G.vexnum; ++v)
        if (!visited2[v])
            DFS(G, v);
}
void DFS(ALGraph G, int v) {
    visit(G, v);
    visited2[v] = true;
    for(ArcNode *w = FirstNeighbor(G, v); w != nullptr; w = w->next)
        if (!visited2[w->adjvex])
            DFS(G, w->adjvex);
}

