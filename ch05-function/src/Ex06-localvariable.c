/*

//변수 종류
//->- 지역변수(Local variable)
//- 전역변수(Global variable)
//- 정적변수(Static variable)
//- 외부변수(Extern variable)
//- 레지스터 변수(Register variable)

//지역변수
//- 함수 내부에 사용
//- 조건문 또는 반복문의 중괄호({})내부에서 사용
//- 함수의 입력형태로 선언한 변수도 지역변수
//- 함수의 매개변수(=함수의 인자=함수의 입력값=함수의 입력변수)
//- {} 지역을 벗어나면 할당되었던 메모리가 자동으로 소멸됩니다.

//지역변수 특징
//- 초기화를 하지 않으면 쓰레기 값이 저장됩니다.
//- 지역변수의 메모리 생성시점은 중괄호내에서 초기화할 때
//- 지역변수의 메모리 소멸시점은 중괄호를 탈출할 때
//- 자동변수(auto variable)

#include <stdio.h>

//함수의 선언
void functionOther(void);

int main(void){
	int localA=10;

	printf("main의 localA값: %d\n", localA); //10

	functionOther();
	return 0;
}

//함수의 정의
void functionOther(void){
	int localA=20;
	int localB=30;

	printf("functionOther의 localA값: %d\n", localA); //20
	printf("functionOther의 localB값: %d\n", localB); //30

	return;
}
*/
