/*

//조건 연산자
//- 피연산자가 3개여서 삼항 연산자라고도 합니다.
//- 조건의 true/false에 따라서 서로 2개의 문장중 하나를 실행해주는 연산자
//- '?'와 ':' 기호로 이루어져 있는 연산자
//- if else문을 사용하면 너무 복잡해질 때 주로 사용됩니다.

// 조건식 ? 참일때 수행문장 : 거짓일때 수행문장

#include <stdio.h>

int main(void){

	int num1=7, num2=10;
	int result;

	result = (num1 > num2)? num1:num2;
	printf("result에 저장된 값: %d \n", result);

	return 0;
}
*/
