//
// Created by F7689454 on 2020/11/18.
//
#include <iostream>
#include "search.h"

int SearchSeq(SSTable ST, int key) {
    ST.data[0] = key;
    int i;
    for (i = ST.TableLen; ST.data[i] != key; --i);
    std::cout << i << std::endl;
    return i;
}
