#include "func.h"

void func1()
{
	printf("func1 �Լ��� �����մϴ�. \n");
	extern int a;
	a = a + 1;
	printf("func1 �Լ� ���� a�� %d\n", a);
}