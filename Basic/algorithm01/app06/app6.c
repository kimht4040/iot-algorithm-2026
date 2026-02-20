#include <stdio.h>

int main(void) {

    int prime[500];
    int prime_cnt =0;
    int ptr =0;

    unsigned long counter = 0;
    prime[prime_cnt++]=2;


    for (int i = 3; i<=1000; i+=2) {
        int n =2;
        for (n =1; n<prime_cnt; n++) {
            counter++;
            if (i%prime[n] ==0) {
                break;
            }
        }
        if (prime_cnt == n) {
            prime[prime_cnt++]=i;
        }
    }


    for (int i = 0; i < prime_cnt; i++) {
        printf("%d\n",prime[i]);
    }
    printf("횟수: %d", counter);
    return 0;
}