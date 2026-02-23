#include <stdio.h>
#include "IntStack.h"
int main(void) {

    IntStack st;

    Initialize(&st, 5);

    while (1) {
        int menu, x;
        printf("1.푸시 2.팝 3.피크, 4.출력 5.클리어 6.검색 0.종료 \n");
        printf("입력: ");
        scanf(" %d", &menu);
        if (menu == 0) {
            break;
        }
        switch (menu) {
            case 1:
                if (IsFull(&st)) {
                    printf("스택이 가득찼습니다.\n");
                }
                else {
                    printf("삽입할 숫자를 입력하세요 : ");
                    scanf("%d", &x);
                    Push(&st, x);
                }

                break;
            case 2:
                if (Pop(&st, &x)==-1) {
                    printf("스택이 비었습니다.\n");
                }
                else
                    printf("최상단 숫자 %d 삭제 \n", x);
                break;
            case 3:
                if (Peek(&st, &x)==-1) {
                    printf("스택이 비었습니다.\n");
                }
                else
                    printf("스택 최상단 숫자 %d \n", x);
                break;
            case 4:
                Print(&st);
                break;
            case 5:
                Clear(&st);
                printf("스택을 비웠습니다.\n");
                break;
            case 6:
                if (!IsEmpty(&st)) {
                    printf("검색할 숫자를 입력하세요 : ");
                    scanf("%d", &x);
                    if (Search(&st,x)==-1) {
                        printf("not exist\n");
                    }
                }
                else
                    printf("스택이 비었습니다.\n");
                break;

            default:
                printf("다시 고르셈");


        }
    }

    return 0;
}