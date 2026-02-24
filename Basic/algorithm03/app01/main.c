#include "IntQueue.h"
#include <stdio.h>
#include <stdlib.h>
int main(void) {

    IntQueue q;
    if (InitQueue(&q, 5)) {
        puts("큐 생성 실패!");
        return 1;
    }
    while (1) {
        int menu, x;
        printf("현재 데이터 수 %d\n", q.num);
        printf("1.인큐 2.디큐 3.피크 4.출력 0.종료\n");
        scanf("%d",&menu);
        if (menu == 0) {
            break;
        }

        switch (menu) {
            case 1:
                if (IsFull(&q)) {
                    printf("꽉참\n");
                    break;
                }
                printf("삽입할 수 입력 : ");
                scanf("%d",&x);
                enqueue(&q, x);
                break;
            case 2:
                if (IsEmpty(&q)) {
                    printf("비었음\n");
                    break;
                }
                dequeue(&q, &x);
                printf("맨 앞 숫자 %d 삭제\n", x);
                break;
            case 3:
                Peek(&q, &x);
                printf("맨 앞 숫자 : %d\n", x);
                break;
            case 4:
                Print(&q);
                break;
            default:
                printf("다시 선택\n");
        }


    }

    Terminate(&q);

    return 0;
}