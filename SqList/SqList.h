//
// Created by F7689454 on 2020/11/16.
//

#ifndef DATA_STRUCT_LIST_H
#define DATA_STRUCT_LIST_H

// 顺序表的定义
#define MaxSize 30
struct SqList {
    int data[MaxSize]{};
    int length = 0;
};

bool ListInsert(SqList &L, int i, int e);
void PrintList(SqList L);
bool ListQuery(SqList L, int i, int &e);
bool ListModify(SqList &L, int i, int e);
int LocateElem(SqList L, int e);
void ListSort(SqList &L);   // 选择排序
SqList ListInit(int len);

bool ReverseList(SqList &L);                // 反转顺序表
void DeleteXList(SqList &L, int x);         // 删除顺序表中所有为x的值
bool SortListMerge(SqList L1, SqList L2, SqList &L);    // 合并两个有序顺序表


#endif //DATA_STRUCT_LIST_H
