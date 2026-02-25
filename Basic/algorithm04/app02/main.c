#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buble_sort(int* a, int n);

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
    buble_sort(a, nx);
    printf("정렬배열 : ");
    for (int i =0; i<nx; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}
void buble_sort(int* a, int n) {
    for (int i =0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

}