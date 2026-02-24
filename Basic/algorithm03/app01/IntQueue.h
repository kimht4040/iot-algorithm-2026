//
// Created by User on 26. 2. 24..
//

#ifndef APP01_INTQUEUE_H
#define APP01_INTQUEUE_H

typedef struct IntQueue {
    int max;
    int num;
    int front;
    int rear;
    int* que;

} IntQueue;

//성공 0아니면 -1
int InitQueue(IntQueue* q, int max);
int enqueue(IntQueue* q, int x);//성공 0아니면 -1
int dequeue(IntQueue* q,int *x);//성공 0아니면 -1
int Peek(const IntQueue* q, int *x);//성공 0아니면 -1
void clear(IntQueue* q);
int Capacity(const IntQueue* q);
int IsEmpty(const IntQueue* q);
int IsFull(const IntQueue* q);
int Size(const IntQueue* q);
void Print(const IntQueue* q);
void Terminate(IntQueue* q);


#endif //APP01_INTQUEUE_H