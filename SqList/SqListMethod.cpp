//
// Created by F7689454 on 2020/11/17.
//
#include "SqList.h"

// 元素逆置
bool ReverseList(SqList &L) {
    if (L.length <= 1)
        return false;
    for (int i = 0; i < L.length / 2; i++) {
        int temp = L.data[i];
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = temp;
    }
    return false;
}


// 删除所有顺序表中的所有为x的值
void DeleteXList(SqList &L, int x) {
    int count = 0;
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == x)
            count++;
        else
            L.data[i - count] = L.data[i];
    }
    L.length = L.length - count;
}

// 合并两个有序顺序表
bool SortListMerge(SqList L1, SqList L2, SqList &L) {
    if (L1.length + L2.length > MaxSize)
        return false;

    int i = 0, j = 0, k = 0;
    while(i < L1.length && j < L2.length) {
        if (L1.data[i] <= L2.data[j])
            L.data[k++] = L1.data[i++];
        else
            L.data[k++] = L2.data[j++];
    }

    while (i < L1.length)
        L.data[k++] = L1.data[i++];
    while (j <L2.length)
        L.data[k++] = L2.data[j++];
    L.length = k;

    return true;
}

