//
// Created by F7689454 on 2020/11/18.
//

#include "sort.h"

void InsertSort(SqList &L) {
    int i, j;
    for (i = 2; i < L.length; i++) {
        if (L.data[i] < L.data[i-1]) {
            L.data[0] = L.data[i];
            for (j = i - 1; L.data[0] < L.data[j]; --j)
                L.data[j + 1] = L.data[j];
            L.data[j + 1] = L.data[0];
        }
    }
}

// 希尔排序
void ShellSort(SqList &L) {
    for (int dk = L.length / 2; dk >= 1; dk = dk / 2)
        for (int i = dk + 1; i < L.length; ++i) {
            L.data[0] = L.data[i];
            int j;
            for (j = i - dk; j > 0 && L.data[0] < L.data[j]; j -= dk)
                L.data[j + dk] = L.data[j];
            L.data[j + dk] = L.data[0];
        }
}


