#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;

	printf("���� �Է� : ");
	scanf("%d", &input);
	printf("�Է� �� : %d\n", input);
	printf("�ּ� �� : %u(10����), %p(16����)\n", (unsigned)&input, &input);
	printf("�ּ� �� : %d(10����), %#X(16����)\n", (int)&input, (int)&input);
	printf("�ּ� �� ũ�� : %d\n", sizeof(&input));

	printf("�ּ� �� ũ�� : %d\n", sizeof(char*));
	return 0;
}