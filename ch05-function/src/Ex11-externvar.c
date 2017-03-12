/*

//외부변수(Extern variable)
//-외부 파일에 선언된 변수를 참조하는 변수
//-자료형 앞에 extern키워드를 사용
//-다른파일에 있는 전역변수를 참조

//Ex11.c	main부
//Ex12.c	변수, 함수 선언

#include <stdio.h>

extern void add(void);

int main(void){

	extern int num1;
	extern int num2;
	extern int num3;

	printf("num1의 값: %d\n", num1);
	printf("num2의 값: %d\n", num2);
	printf("num3의 값: %d\n", num3);
	printf("덧셈 결과: %d\n", num1+num2+num3);

	add();

	return 0;
}
*/
