#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int* a, int n);

int main(void) {

    int nx;
    int random = 0;
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
    selection_sort(a, nx);
    printf("정렬배열 : ");
    for (int i =0; i<nx; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}


void selection_sort(int* a, int n) {

    for (int i =0; i<n; i++) {
        int min =i;
        for (int j=i+1; j<n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
