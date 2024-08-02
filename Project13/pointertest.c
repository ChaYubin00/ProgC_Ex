#include <stdio.h>

void main()
{
	int aa[4] = { 100, 200, 300, 400 };
	int* ptr;

	for (int l = 0; l < 4; l++)
	{
		printf("aa[%d]의 값은 %d\n", l, aa[l]);

	}
	ptr = aa;
	*ptr = 500;
	ptr = aa + 3;
	*ptr = 600;

	for (int l = 0; l < 4; l++)
	{
		printf("변경된 aa[%d]의 값은 %d\n", l, aa[l]);
	}
}