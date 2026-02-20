#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int median(int a, int b, int c) {
	
	if (a >= b) {
		if (b >= c) {
			return b;

		}
		else if (a >= c) {
			return c;
		}
		else
			return a;
	}
	else {
		if (a >= c) {
			return a;

		}
		else if (b >= c) {
			return c;
		}
		else
			return b;
	}


	return 0;
 }



int main() {

	
	int a, b, c;

	printf("세 정수 입력\n");
	printf("a 값 > "); scanf("%d", &a);
	printf("b 값 > "); scanf("%d", &b);
	printf("c 값 > "); scanf("%d", &c);

	printf("중앙 값은 %d\n ", median(a, b, c));


	return 0;
}