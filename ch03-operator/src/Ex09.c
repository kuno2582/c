/*

//계산기
//피연산자 두개를 입력받아
//산술연산(+, -, *, /, %)의 결과를 출력하는 프로그램

//첫번째 피연산의 수를 입력하세요 => 입력
//두번째 피연산의 수를 입력하세요 => 입력
//산술연산(+, -, *, /, %)의 모두 결과

//제한 사항
//정수를 입력

#include <stdio.h>

int main(void){

	//변수 선언
	int a, b;
	//
	float result;

	//
	printf("첫번째 피연산의 수를 입력하세요 =>");
	//
	fflush(stdout);
	//
	scanf("%d", &a);

	printf("두번째 피연산의 수를 입력하세요 =>");
	fflush(stdout);
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %5.2f \n", a, b, result);

	result = a - b;
	printf("%d - %d = %5.2f \n", a, b, result);

	result = a * b;
	printf("%d * %d = %5.2f \n", a, b, result);

	result = a / b;
	printf("%d / %d = %5.2f \n", a, b, result);

	result = a % b;
	printf("%d %% %d = %5.2f \n", a, b, result);

	return 0;
}
*/
