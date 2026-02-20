#include <stdio.h>

int main(void) {
    int ary[] = {10, 30, 50, 70, 90};


    int * pa = ary;

    int count = sizeof(ary)/ sizeof(ary[0]);
    for (int i = 0; i <count; i++) {
        printf("값 : %d\n", *(pa+i));
    }




    return 0;
}