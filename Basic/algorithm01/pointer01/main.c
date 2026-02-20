#include <stdio.h>

int main(void) {
    int a = 10;


    int* pa = &a;

    printf("a = %d\n", a);
    printf("a주소 = %p\n", &a);
    //printf("a주소 = %zu\n", &a);
    printf("pa의 값(저장된 주소) : %p\n", pa);
    printf("pa가 가리키는 값 : %d\n", *pa);




    return 0;
}