
#include <stdio.h>
#include <stdlib.h>


typedef struct stack {
    int num;
    int* stk;

} stack;
int gen_stack(stack* st,int n) {
    st->stk = calloc(1, sizeof(stack));
    st->num = -1;
    return 0;
}

int Push(stack* st,int n) {
    st->num++;
    st->stk[st->num] =n;
    return 0;
}
int Pop(stack* st) {
    int x = st->stk[st->num];
    st->num--;
    return x;
}


int main() {




    stack st;
    gen_stack(&st,4);
    Push(&st,1);
    Push(&st,2);
    Push(&st,3);
    Push(&st,4);
    printf("%d",Pop(&st));
    printf("%d",Pop(&st));
    printf("%d",Pop(&st));
    printf("%d",Pop(&st));

    return 0;
}