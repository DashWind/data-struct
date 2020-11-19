//
// Created by F7689454 on 2020/11/18.
//

#include <cstdlib>
#include <zconf.h>
#include <iostream>
#include "sort.h"

SqList InitSortTable(int len) {
    SqList L;
    L.length = len + 1;     // 第一个位置空出来作为哨兵

    for (int i = 1; i < L.length; i++) {
        unsigned seed = clock();
        srand(seed);
        int number = rand() % (10000 + 1);
        L.data[i] = number;
        usleep(1);
    }
    return L;
}

void PrintSortTable(SqList L) {
    for (int i = 0; i < L.length; i++)
        std::cout << L.data[i] << " ";
    std::cout << std::endl;
}
