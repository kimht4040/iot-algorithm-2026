#include <stdio.h>
#include <stdlib.h>
int search (const int a[], int n, int key);//검색한 요소의 인덱스 리턴

int main(void) {

    int nx, ky;

    printf("linner search\n");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    for (int i =0; i < nx; i++) {
        scanf("%d", &x[i]);
    }

    scanf("%d", &ky);
    printf("%d", search (x, nx, ky)+1);

    return 0;
}



int search (const int a[], int n, int key) {

    int i = 0;
    /*while (1) {
        if (i==n) {
            printf("not in array\n");
            return -1;
        }
        if (a[i] == key) {
            return i;
        }
        i++;
    }*/
    for (i =0; i < n; i++) {
        if (a[i]==key) {
            return i;
        }
    }
    printf("not found\n");
    return -1;
}