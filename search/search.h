//
// Created by F7689454 on 2020/11/18.
//

#ifndef DATA_STRUCT_SEARCH_H
#define DATA_STRUCT_SEARCH_H

#define MaxSize 20
struct SSTable {
    int data[MaxSize];
    int TableLen;
};

SSTable InitTable(int length);
void PrintTable(SSTable T);
int SearchSeq(SSTable ST, int key);
int BinSearch(SSTable S, int key);
#endif //DATA_STRUCT_SEARCH_H
