//
// Created by F7689454 on 2020/11/18.
//

#ifndef DATA_STRUCT_SORT_H
#define DATA_STRUCT_SORT_H

#define MaxSize 100000
struct SqList {
    int data[MaxSize]{};
    int length = 0;
};

SqList InitSortTable(int len);
void InsertSort(SqList &L);
void PrintSortTable(SqList L);
void ShellSort(SqList &L);
void BubbleSort(SqList &L);
void QuickSort(SqList &L, int low, int high);
void SelectSort(SqList &L);
void BuildMaxHeap(SqList &L);
void HeapSort(SqList &L);

#endif //DATA_STRUCT_SORT_H
