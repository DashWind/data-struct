#include "SqList.h"
#include <iostream>

using namespace std;

SqList ListInit(int len) {
    SqList L;
    // 随机初始化一个SqList
    unsigned seed = clock();
    srand(seed);
    for (int i = 1; i <= len; i++) {
        int number = (rand() % (50 + 1));
        ListInsert(L, i, number);
    }
    return L;
}

// 插入操作
bool ListInsert(SqList &L, int i, int e) {

    if (i < 1 || i > L.length + 1)     // 第i个位置前插入元素，
        return false;
    if (L.length >= MaxSize)        // 是否还有空位置
        return false;
    for (int j = L.length; j >= i; j--)     // 将元素后移，空出位置插入
        L.data[j] = L.data[j - 1];

    L.data[i - 1] = e;          // 插入元素
    L.length++;             // 长度加一
    return true;
}


//删除操作
bool ListDelete(SqList &L, int i, int &e) {
    if (i < 1 || i > L.length)
        return false;
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++)
        L.data[j - 1] = L.data[j];
    L.length--;
    return true;
}

// 查找操作
bool ListQuery(SqList L, int i, int &e) {
    if (i < 1 || i > L.length)
        return false;
    e = L.data[i - 1];
    return true;
}

// 修改操作
bool ListModify(SqList &L, int i, int e) {
    if (i < 1 || i > L.length)
        return false;
    L.data[i - 1] = e;
    return true;
}

// 按值查找
int LocateElem(SqList L, int e) {
    int i;
    for (i = 0; i < L.length; i++)
        if (L.data[i] == e)
            return i + 1;
    return 0;
}

// 选择排序
void ListSort(SqList &L) {
    for (int i = 0; i < L.length; i++) {
        int min = L.data[i], index = i;
        for (int j = i; j < L.length; j++)
            if (L.data[j] < min) {
                min = L.data[j];
                index = j;
            }
        int temp;
        temp = L.data[i];
        L.data[i] = L.data[index];
        L.data[index] = temp;
    }
}

// 打印顺序表
void PrintList(SqList L) {
    string s = "[";
    for (int i = 0; i < L.length; i++) {
        string temp = to_string(L.data[i]);
        if (i != L.length - 1)
            temp.append(", ");
        s.append(temp);
    }
    s.append("]");
    cout << s << endl;
}

