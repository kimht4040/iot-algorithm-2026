#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max_of(const int *arr, int n) {
    int max = arr[0];
    for (int i = 0; i< n; i++) {
        if ( arr[i] > max ) {
            max = arr[i];
        }
    }

    return max;
}

int main(void) {
    int num;
    scanf("%d", &num);

    int *height = calloc(num, sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < num; i++) {
        height[i] = 100+rand()%90;
    }
    printf("%d\n", max_of(height, num));
    free(height);

    return 0;
}