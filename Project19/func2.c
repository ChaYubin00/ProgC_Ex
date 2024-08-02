#include "func.h"

void func2()
{
	printf("func2 함수를 실행합니다. \n");
	extern int a;
	a = a + 1;
	printf("func2 함수 변수 a는 %d\n", a);
}