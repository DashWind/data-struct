//
// Created by F7689454 on 2020/11/17.
//

#include "SString.h"

// 串的简单模式匹配
int index(SString S, SString T) {
    int i = 1, j = 1;
    while (i < S.length && j <= T.length) {
        if (S.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        } else {
            i = i - j + 2;
            j = 1;
        }

        if (j > T.length)
            return j - T.length;
        else
            return 0;
    }
}


/*
 * KMP
 * next数组算法，KMP求子串位置算法
 */
void GetNext(SString T, int next[]) {
    int i = 1, j = 0;
    next[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        } else {
            j = next[j];
        }
    }
}

int IndexKMP(SString S, SString T, int next[]) {
    int i = 1, j = 1;
    while (i <= S.length && j <= T.length) {
        if (j == 0 || S.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        } else {
            j = next[j];
        }
        if (j > T.length)
            return j - T.length;
        else
            return 0;
    }
}


/*
 * KMP优化
 * aaaab 与 aaabaaaaaaab 模式匹配时也会有多余的比较
 */
void GetNextval(SString T, int next[]) {
    int i = 1, j = 0;
    next[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            if (T.ch[i] != T.ch[j])
                next[i] = j;
            else
                next[i] = next[j];
        } else
            j = next[j];
    }
}




