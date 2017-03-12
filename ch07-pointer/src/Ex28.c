/*

//값에 의한 호출(Call by Value)
//- 변수(메모리공간에 저장된 값) 또는 값을 복사해서 함수 호출
//- '값'을 복사해서 해당 함수에서 사용
//- 기존 변수에 저장된 값은 변경되지 않는다.

//값에 의한 호출 문제
//함수의 인자에 전달되는 매개변수가 많아지게 되는 문제

#include <stdio.h>

int func(int i, int i2, int i3, int i4, int i5, int i6);

int main(void){
	int n=10;
	int result=0;

	result=func(n); //n=10, 값을 복사해서 해당 함수에서 사용
	printf("%d\n", result);
	printf("%d\n", n);

	return 0;
}

int func(int i, int i2, int i3, int i4, int i5, int i6){ //i=10, 복사된 값을 함수에서 사용
	i=i+1;
	return i;
}
*/
