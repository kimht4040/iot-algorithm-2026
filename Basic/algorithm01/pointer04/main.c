#include <stdio.h>
void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}
void swap3(int **a, int **b) {
    int temp = **a;
    **a = **b;
    **b = temp;
}

int main(void) {
    int a = 10;
    int b = 20;


    swap1(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    int *pa = &a;
    int *pb = &b;

    swap2(&pa, &pb);
    printf("a = %d, b = %d\n", a, b);


    swap3(&pa, &pb);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}