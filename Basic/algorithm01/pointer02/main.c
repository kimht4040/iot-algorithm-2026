#include <stdio.h>

void change(int *num) {
    *num*=300;
}

int main(void) {
    int num  = 10;

    change(&num);


    printf("num = %d\n",num);


    return 0;
}
