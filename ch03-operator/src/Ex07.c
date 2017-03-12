/*

//증감 연산자 수행시 값 변화(주의)

#include <stdio.h>

int main(void){

	int num1=10, num2=20;
	int r1, r2;

	//선 증가 후 연산
	r1 = ++num1;
	//r1:  11
	//num1: 11
	printf("r1: %d, num1: %d \n", r1, num1);

	//선연산 후 증가
	r2 = num2++;
	//r2: 21
	//num2: 21
	printf("r2: %d, num2: %d \n", r2, num2);

	return 0;
}
*/
