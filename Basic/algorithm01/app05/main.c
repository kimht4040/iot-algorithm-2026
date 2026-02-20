#include <stdio.h>

int main(void) {
    unsigned long counter = 0;//나눗셈 횟수
    int p_count =0;
    for (int n=2; n<=1000; n++) {
        int i = 2;
        for (i; i<n; i++) {
            counter++;
            if (n%i==0) {
                break;
            }
        }
        if (i==n) {
            p_count++;

            printf("%lu\n",n);
        }
    }

    printf("%lu개\n",p_count);

    return 0;
}