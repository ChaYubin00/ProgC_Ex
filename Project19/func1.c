#include "func.h"

void func1()
{
	printf("func1 함수를 실행합니다. \n");
	extern int a;
	a = a + 1;
	printf("func1 함수 변수 a는 %d\n", a);
}