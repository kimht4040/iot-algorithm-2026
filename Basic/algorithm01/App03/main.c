#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int* x =  malloc(sizeof(int));
    if (x ==NULL) {
        puts("메모리 할당 실패");
        return 1;
    }
    *x = 57;
    printf("*x = %d\n", *x);
    free(x);



    int na;

    printf("요소 개수 >");
    scanf("%d", &na);

    int* ary = calloc(na, sizeof(int));
    if (ary ==NULL) {
        return 1;
    }

    printf("%d 개의 정수를 입력하세요\n", na);
    for (int i = 0; i < na; i++) {
        scanf("%d", ary +i);
    }

    puts("요소 값 출력");
    for (int i = 0;i < na;i++) {
        printf("%d ", *(ary +i));
    }

    free(ary);

    return 0;
}