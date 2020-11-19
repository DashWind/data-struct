//
// Created by F7689454 on 2020/11/18.
//
#include "sort.h"

void BubbleSort(SqList &L) {
    int temp;
    for (int i = 1; i < L.length; i++) {
        bool flag = false;
        for (int j = L.length - 1; j > i; j--) {
            if (L.data[j - 1] > L.data[j]) {
                temp = L.data[j - 1];
                L.data[j - 1] = L.data[j];
                L.data[j] = temp;
                flag = true;
            }
        }
        if (!flag)
            return ;
    }
}


// 快速排序
int Partition(SqList &L, int low, int high) {
    int pivot = L.data[low];
    while (low < high) {
        while (low < high && L.data[high] >= pivot)
            --high;
        L.data[low] = L.data[high];
        while (low < high && L.data[low] <= pivot)
            ++low;
        L.data[high] = L.data[low];
    }
    L.data[low] = pivot;
    return low;
}
void QuickSort(SqList &L, int low, int high) {
    if (low < high) {
        int pivotpos = Partition(L, low, high);
        QuickSort(L, low, pivotpos - 1);
        QuickSort(L, pivotpos + 1, high);
    }
}