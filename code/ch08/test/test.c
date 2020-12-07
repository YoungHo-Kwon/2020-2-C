#include <stdio.h>

int main(void) {

	int int1 = 10;
	char char1 = 'a';
	double double1 = 1.5;

	int* ptrint = &int1;
	char *ptrchar = &char1;
	double *ptrdouble = &double1;

	printf("%d, %d, %d\n", sizeof(ptrint), sizeof(ptrchar), sizeof(ptrdouble));
	printf("%d, %d, %d\n", sizeof(&int1), sizeof(&char1), sizeof(&double1));

	int a = 10;
	const int* pi = &a;
	//*pi = 100;
	pi = &int1;
	printf("%d %d %d\n", *pi, &a, pi);

	return 0;

}