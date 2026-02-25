#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static char memo[128][1024];
int call =0;
void recur(int x) {
    call++;
    if (memo[x+1][0] != '\0') {
        printf("%s", memo[x+1]);
    }
    else {
        if (x>0) {
            recur(x-1);
            printf("%d\n", x);
            recur(x-2);
            sprintf(memo[x+1], "%s%d\n%s", memo[x], x , memo[x-1]);
        }
        else {
            strcpy(memo[x+1], "");
        }

    }
}

int main() {

    int x;
    while (1) {
        call =0;
        scanf("%d",&x);

        recur(x);
        printf("함수호출 횟수%d\n", call);
    }
    return 0;
}