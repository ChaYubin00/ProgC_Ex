#include "func.h"

void func2()
{
	printf("func2 �Լ��� �����մϴ�. \n");
	extern int a;
	a = a + 1;
	printf("func2 �Լ� ���� a�� %d\n", a);
}