//
// Created by User on 26. 2. 23..
//

#ifndef APP3_INTSTACK_H
#define APP3_INTSTACK_H
typedef struct {
    int max;
    int ptr;
    int* stk;

}IntStack;

int Initialize(IntStack*st, int max);
int Push(IntStack*st, int x);
int Pop(IntStack* st, int* x);
int Peek(const IntStack* st, int* x);//마지막 데이터
void Clear(IntStack* st);
int Capacity(const IntStack* st);//최대 용량
int Size(const IntStack* st);
int IsEmpty(const IntStack* st);
int IsFull(const IntStack* st);
int Search(const IntStack* st, int x);
int Print(const IntStack* st);
void Terminate(IntStack* st);





#endif //APP3_INTSTACK_H