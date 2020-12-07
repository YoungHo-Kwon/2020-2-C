#include <stdio.h>

int main(void) {
	//int a[3] = { 1,3,6 };
	//int* pi = &a[0];
	//printf("%d %d %d", a[0], *pi, *a);
	//printf("%d %d %d", a[1], *(pi+1), *(a+1));
	//printf("%d %d %d", a[2], *(pi+2), *(a+2));
	int td[][3] = { {8,5,4}, {2,7,6} };
	printf("%p %p %p %p %p\n", &td[0][0], * td, &td[0], td, *td[0]);
	printf("%p, %p, %p", **td, &td[0], &td[0][0]);
	return 0;
}