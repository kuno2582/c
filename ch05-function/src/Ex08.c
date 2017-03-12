/*

//함수의 매개변수도 지역변수
//-매개변수 = 함수의 인자 = 함수의 입력값 = 함수의 입력변수
//-지역변수는 생성과 소멸을 컴파일러가 자동으로 수행해준다.
#include <stdio.h>
int subtract(int x, int y);

int main(void){
	int a=7, b=3;
	int result=0;

	result = subtract(a, b);
	printf("뺄셈 결과: %d\n", result);

	return 0;
}

//함수의 정의
int subtract(int x, int y){
	return x-y;
}
*/
