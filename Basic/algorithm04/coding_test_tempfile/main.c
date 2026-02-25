
#include <stdio.h>
#include <stdlib.h>


typedef struct IntQueue {
    int max;
    int num;
    int front;
    int rear;
    int* que;

} IntQueue;

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

        q->num++;
        q->que[q->rear++] = x;
        if (q->rear == q->max) {
            q->rear = 0;
        }
        return 0;

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

int main() {

    int x;
    IntQueue q;
    int max;
    scanf("%d", &max);
    InitQueue(&q, max);

    for (int i = 1; i <=max ; i++) {
        enqueue(&q, i);
    }

    while (1) {
        if (q.num == 1) {
            printf("%d\n", q.que[(q.front)%q.max]);
            break;
        }
        dequeue(&q, &x);
        if (q.num == 1) {
            printf("%d\n", q.que[(q.front)%q.max]);
            break;
        }
        dequeue(&q, &x);
        enqueue(&q, x);
    }





    return 0;
}