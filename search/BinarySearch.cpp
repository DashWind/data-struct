//
// Created by F7689454 on 2020/11/18.
//
#include <iostream>
#include "search.h"

int BinSearch(SSTable S, int key) {
    int low = 0, high = S.TableLen - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (S.data[mid] == key) {
            std::cout << mid << std::endl;
            return mid;
        }
        else if (S.data[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
