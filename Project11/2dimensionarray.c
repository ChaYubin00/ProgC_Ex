#include <stdio.h>

void main()
{
	int a[9][9];
	int i, k;
	int sum;

	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 9; k++)
		{
			sum = (i+1) * (k+1);
			a[k][i] = sum;
		}
	}

	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 9; k++)
		{
			printf("%d X %d = %d          ",k+1, i+1, a[k][i]);
		}
		printf("\n");
	}
}