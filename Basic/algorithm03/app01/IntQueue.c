//
// Created by User on 26. 2. 24..
//

#include "IntQueue.h"
#include <stdio.h>
#include <stdlib.h>


int InitQueue(IntQueue* q, int max) {
    q->max = max;
    if ((q->que = calloc(max, sizeof(int))) ==NULL) {
        q->max = 0;
        return -1;
    }

    q->num = q->rear = q->front = 0;
    return 0;
}
int enqueue(IntQueue* q, int x) {
    if (q->num == q->max) {
        return -1;
    }
    else {
        q->num++;
        q->que[q->rear++] = x;
        if (q->rear == q->max) {
            q->rear = 0;
        }
        return 0;
    }
}
int dequeue(IntQueue* q, int * x) {
    q->num--;
    *x = q->que[q->front];
    q->front++;
    if (q->front == q->max) {
        q->front = 0;

    }
    return 0;
}
int Peek(const IntQueue* q, int *x) {
    *x = q->que[q->front];
    return 0;
}
void clear(IntQueue* q) {
    q->num=q->front = q->rear = 0;
}
int Capacity(const IntQueue* q) {
    return q->max;
}
int IsEmpty(const IntQueue* q) {
    return q->num == 0;
}
int IsFull(const IntQueue* q) {
    return q->num == q->max;
}
int Size(const IntQueue* q) {
    return q->num;
}
void Print(const IntQueue* q) {
    for (int i = 0; i< q-> num; i++) {
        printf("%d ", q->que[(q->front + i)%q->max]);
    }
    puts("");
}
void Terminate(IntQueue* q) {
    if (q->que != NULL) {
        free(q->que);
    }
    q->max = 0;
    q->front = 0;
    q->rear = 0;
    q->num = 0;
}