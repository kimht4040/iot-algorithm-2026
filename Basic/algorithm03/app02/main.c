#include <stdio.h>

int fac(int x) {
    if (x>1) {
        return x * fac(x-1);
    }
    else
        return 1;
}

int main(void) {

    int x;
    int result = 0;



    while (1) {
        scanf("%d", &x);
        result = fac(x);
        printf("%d!= %d\n",x, result);
    }

    return 0;
}