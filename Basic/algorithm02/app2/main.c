
#include <stdio.h>
#include <stdlib.h>

int binary_search (const int a[], int n, int k) {
    int end = n-1;
    int start = 0;

    while (start <=end) {
        int center = (end+start)/2;
        if (a[center] == k) {
            return center;
        }
        if (center == 0 || center == end) {
            printf("not found\n");
            return -1;
        }
        if (a[center] > k ) {
            end = center-1;


        }
        else if (a[center] < k ) {
            start = center+1;

        }

    }
}
int campare(const void *a, const void *b) {
    int n1 = *(int *)a;
    int n2 = *(int *)b;
    if (n1 < n2) return -1;
    if (n1 > n2) return 1;
    return 0;
}

int main() {

    int nx, ky;



    scanf("%d %d",&nx,&ky);


    int *x = calloc(nx,sizeof(int) );

    for (int i = 0; i< nx; i++) {
        scanf("%d", &x[i]);
    }

    qsort(x, nx, sizeof(int),campare);
    printf("정렬 후 %d번째 인덱스에 존재\n",binary_search(x,nx,ky));


    return 0;
}