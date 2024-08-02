#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i = 1;
	int num;
	printf("단을 입력하세요: ");
	while (1)
	{
		printf("몇단? ");
		scanf("%d", &num);
		if (num== 0)
			break;
		for (i = 1;  i <= 9; i++)
		{
			printf("%d X %d = %d \n", num, i, num * i);
			if (i == 9)
				break;
		}
	}



}