#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[10];
	int kor;
	int eng;
	float avg;

	printf("�̸�: ");
	scanf("%s", name);

	printf("���� ���� : ");
	scanf("%d", &kor);

	printf("���� ���� : ");
	scanf("%d", &eng);

	avg = (kor + eng) / 2.0f;

	printf("\n");
	printf("�л� �̸� : %s\n", name);
	printf("���� ���� : %d\n", kor);
	printf("���� ���� : %d\n", eng);
	printf("��� ���� : %5.1f\n", avg);
}