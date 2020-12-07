#include <stdio.h>
#define MAX 5

int main(void) {
	int i = 1;

	for (i = 1; i <= MAX; i++) {
		printf("C 언어 재미있네요! %d\n", i);
	}

	printf("\n제어변수 count => %d\n", i);

	return 0;
}