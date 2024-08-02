#include <stdio.h>

void main()
{
	int a[5] = { 4, 2, 3, 0, 1 };
	int temp;
	int i, k;

	printf("정렬 전 배열 a==> ");
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 4-i; k++)
		{
			if (a[k] > a[k + 1])
			{
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
				
			}
			
		}
		
			
	}
	printf("정렬 후 배열 a==> ");
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}