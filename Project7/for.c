#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int dan;
	int i;

	printf("¸î ´Ü? ");
	scanf("%d", &dan);

	for (i = 1; i <= 9; i++) {
		printf("%d X %d = %d \n", dan, i, dan * i);
	}
}