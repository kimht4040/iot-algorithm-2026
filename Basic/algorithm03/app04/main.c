#include <stdio.h>

void recursion(int n) { //1부터 시작해서 n이 3보다 큰 경우 x-2 까지의 수를 표시함
                        //가 5인경우 1 2 3 1 4 1 2 5 1 2 3 1
    if (n>0) {
        recursion(n-1);
        printf("%d ",n);
        recursion(n-2);
    }
}


int main(void) {
    recursion(7);
    return 0;
}