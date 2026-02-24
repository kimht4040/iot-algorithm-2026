#include <stdio.h>

#include "intstack.h"


void recur(int n) {
    IntStack stk;
    Initialize(&stk, 100);

    Top:
    if (n > 0) {
    //    recur(n-1);
      //  printf("%d ",n);
        Push(&stk, n);
        n = n - 1;
        goto Top;
    }
    if (!IsEmpty(&stk)) {
        Pop(&stk, &n);
        printf("%d ",n);
        n = n-2;

        goto Top;
    }
}
int main(void) {

    recur(5);

    return 0;
}