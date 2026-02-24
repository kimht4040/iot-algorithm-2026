#include <stdio.h>

int main(void) {

    int x;

    while (1) {
        int temp = 1;
        printf("Enter a number: ");

        scanf("%d", &x);

        for (int i = x; i>0; i--) {
            temp = temp * i;
        }

        printf("%d! = %d\n",x, temp);
    }


    return 0;
}