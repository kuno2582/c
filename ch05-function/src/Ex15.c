/*

//재귀함수(Recursive Function)
//- 함수내에서 자기 자신을 다시 호출하는 함수
//- 재귀 호출(Recursive call): 자기 자신을 호출 행위

//재귀 호출의 문제점
//시간과 메모리 공간의 효율이 저하 될 수 있습니다. 개발에 신중을 기해야 합니다.

#include <stdio.h>

void recursiveCall(void);

int main(void){

	recursiveCall();

	return 0;
}

void recursiveCall(void){
	printf("Recursive Call\n");
	recursiveCall();
}
*/
