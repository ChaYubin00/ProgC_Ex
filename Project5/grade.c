#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &a);

	if (a < 90)
	{
		if (a < 80)
		{
			if (a < 70)
			{
				if (a < 60)
				{
					printf("����� ������ F�Դϴ�.\n");
				}
				else
					printf("����� ������ D�Դϴ�.\n");
			}
			else
				printf("����� ������ C�Դϴ�.\n");
		}
		else
			printf("����� ������ B�Դϴ�.\n");
	}
	else
		printf("����� ������ A�Դϴ�. \n");
}