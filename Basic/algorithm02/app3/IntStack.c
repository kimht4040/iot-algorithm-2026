//
// Created by User on 26. 2. 23..
//

#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"


int Initialize(IntStack*st, int max) {
    st -> ptr = 0;
    if ((st -> stk = calloc(max, sizeof(int )))==NULL) {
        st -> max = 0;
        return -1;
    }
    st -> max = max;
    return 0;

}
int Push(IntStack*st, int x) {
    if (st -> ptr >= st -> max) {
        return -1;
    }
    st -> stk[st->ptr] = x;
    st -> ptr++;
    printf("스택 용량 %d/%d\n", st-> ptr, st -> max);
    return 0;
}
int Pop(IntStack* st, int* x) {
    if (st -> ptr <= 0) {
        return -1;
    }
    st -> ptr--;
    *x = st -> stk[st -> ptr];
    printf("스택 용량 %d/%d\n", st-> ptr, st -> max);
    return *x;
}
int Peek(const IntStack* st, int* x) {
    if (st -> ptr <= 0) {
        return -1;
    }
    *x = st ->stk[st -> ptr - 1];
    return *x;
}
void Clear(IntStack* st) {
    st -> ptr = 0;
}
int Capacity(const IntStack* st) {
    return st -> max;
}
int Size(const IntStack* st) {
    return st -> ptr;
}
int IsEmpty(const IntStack* st) {
    return st -> ptr == 0;
}
int IsFull(const IntStack* st) {
    return st -> ptr >= st-> max ? 1:0;
}
int Search(const IntStack* st, int x) {
    for (int i = st -> ptr-1 ; i>=0 ; i--) {
        if (st -> stk[i] == x) {
            printf("exist\n");
            return 1;
        }

    }
    return -1;
}
int Print(const IntStack* st) {
    for (int i =0; i< st-> ptr;i++) {
        printf("%d ", st -> stk[i]);
    }
    printf("\n");
    return 0;
}
void Terminate(IntStack* st) {
    if (st->stk != NULL) {
        free(st -> stk);
    }
    st -> max = st-> ptr = 0;
}
