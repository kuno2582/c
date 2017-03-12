/*

//재귀함수 호출시 무한루프 문제 해결
//- 재귀함수의 문제를 해결하기 위해서는 return문 추가(함수를 종료하고 반환)
//- 재귀함수 호출 전에 종료하기 위한 조건을 반드시 수행주어야 합니다.


#include <stdio.h>

void recursiveCall(void);

int main(void){

	recursiveCall();

	return 0;
}

void recursiveCall(void){

	static int i=1;

	if(i>7){
		return;
	}

	printf("Recursive Call %d회 수행\n", i);
	i=i+1;

	recursiveCall(); //
}
*/
