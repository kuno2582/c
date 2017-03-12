/*

//주소에 의한 호출(Call By Reference)
//-주소(메모리 공간의 주소)를 참조해서 함수 호출
//-값이 들어있는 '주소'를 전달
//-연산결과에 따라 기존 변수에 저장된 값이 변경이 되게 됩니다.

#include <stdio.h>

int main(void){

	int n=10;
	int result=0;

	result=func(&n); //값이 들어있는 주소 전달
	printf("%d\n", result);
	printf("%d\n", n);

	return 0;
}

int func(int* i){ //i=&n, 값이 들어있는 주소를 전달 받음
	*i=*i+1;

	return *i;
}
*/
