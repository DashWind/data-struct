//
// Created by F7689454 on 2020/11/17.
//

#ifndef DATA_STRUCT_SSTRING_H
#define DATA_STRUCT_SSTRING_H


#define MaxLen 255
typedef struct {
    char ch[MaxLen];
    int length;
}SString;

int index(SString S, SString T);
void GetNext(SString T, int next[]);
int IndexKMP(SString S, SString T, int next[]);
void GetNextval(SString T, int next[]);

#endif //DATA_STRUCT_SSTRING_H
