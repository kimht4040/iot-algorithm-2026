#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int* a, int n);

int main(void) {

    int nx;

    scanf("%d", &nx);
    int a[nx];

    srand(time(NULL));
    for (int i =0; i<nx; i++) {
        a[i] = rand() % nx;
    }
    printf("원본배열 : ");
    for (int i =0; i<nx; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    insertion_sort(a, nx);
    printf("정렬배열 : ");
    for (int i =0; i<nx; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}


void insertion_sort(int* a, int n) {
    for (int i = 1; i<n; i++) {
        int key = a[i];
        int j = i-1;
        for (j; j>=0 && key < a[j]; j--) {
            a[j+1] = a[j];
        }
        a[j + 1] = key;
    }
}
