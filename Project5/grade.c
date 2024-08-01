#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;

	printf("점수를 입력하세요 :");
	scanf("%d", &a);

	if (a < 90)
	{
		if (a < 80)
		{
			if (a < 70)
			{
				if (a < 60)
				{
					printf("당신의 학점은 F입니다.\n");
				}
				else
					printf("당신의 학점은 D입니다.\n");
			}
			else
				printf("당신의 학점은 C입니다.\n");
		}
		else
			printf("당신의 학점은 B입니다.\n");
	}
	else
		printf("당신의 학점은 A입니다. \n");
}