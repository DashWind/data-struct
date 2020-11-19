//
// Created by F7689454 on 2020/11/18.
//

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include "search.h"

SSTable InitTable(int length) {
    SSTable T;
    T.TableLen = length + 1;
    int i = 0;
    while (length--) {
        unsigned seed = clock();
        srand(seed);
        int number = (rand() % (10 + 1));
        T.data[i++] = number;
        usleep(1);
    }
    return T;
}

void PrintTable(SSTable T) {
    for (int i = 1; i < T.TableLen; i++)
        std::cout << T.data[i] << " ";
    std::cout << std::endl;
}

