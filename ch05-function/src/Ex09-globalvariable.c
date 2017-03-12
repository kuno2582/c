/*

//전역변수(Global variable)
//- 프로그램의 모든 범위에 유효한 변수
//- {} 내/외에서 모두 사용

//전역변수 특징
// - 초기화를 하지 않아도 자동으로 0으로 설정이 됩니다.(자동 초기화)
// - 전역변수의 메모리 생성시점은 프로그램이 시작될 때
// - 전역변수의 메모리 소멸시점은 프로그램이 종료될 때


#include <stdio.h>

int num; //전역변수

void change(void);

int main(void){

//	int num; //지역변수

	printf("함수 호출 전 num값: %d\n", num);
	change();
	printf("함수 호출 후 num값: %d\n", num);

	return 0;
}

void change(void){

	num=70;

	return;
}
*/
