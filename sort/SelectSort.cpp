//
// Created by F7689454 on 2020/11/19.
//
#include "sort.h"

void SelectSort(SqList &L) {
    int min, temp;
    for (int i = 0; i < L.length; i++) {
        min = i;
        for (int j = i + 1; j < L.length; j++)
            if (L.data[j] < L.data[min])
                min = j;
        if (min != i) {
            temp = L.data[i];
            L.data[i] = L.data[min];
            L.data[min] = temp;
        }
    }
}


// 建立大根堆
void HeadAdjust(SqList &L, int k, int len) {
    L.data[0] = L.data[k];
    for (int i = 2 * k; i <= len; i *= 2) {
        if (i < len && L.data[i] < L.data[i + 1])
            i++;
        if (L.data[0] >= L.data[i])
            break;
        else {
            L.data[k] = L.data[i];
            k = i;
        }
    }
    L.data[k] = L.data[0];
}
void BuildMaxHeap(SqList &L, int len) {
    for (int i = len / 2; i > 0; i--)  // 从堆的中间开始向下遍历
        HeadAdjust(L, i, len);
}
void HeapSort(SqList &L) {
    int temp;
    BuildMaxHeap(L, L.length - 1);
    for (int i = L.length - 1; i > 1; i--) {
        temp = L.data[i];
        L.data[i] = L.data[1];
        L.data[1] = temp;
        HeadAdjust(L, 1, i - 1);
    }
}