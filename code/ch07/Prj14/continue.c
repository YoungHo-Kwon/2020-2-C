#include <stdio.h>

int main(void) {
	const int MAX = 13;

	printf("1���� %d���� ������� 3���� ������ �������� �ʴ� ��\n", MAX);
	for (int i = 1; i <= MAX; i++) {
		if (i % 3 == 0)
			continue;
		printf("%3d", i);
	}
	puts("");

	return 0;
}