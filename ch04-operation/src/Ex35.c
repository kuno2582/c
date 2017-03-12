/*

//1~100 까지의 숫자중
//홀수의 합과 짝수의 합을 구하는 프로그램

//누적
//변수 선언과 초기화

#include <stdio.h>

int main(void){

	int i;

	int even_sum = 0;
	int odd_sum = 0;

	for(i=1; i<=100 ; i++){
		if(i%2==0)
			even_sum = even_sum + i;
		else
			odd_sum = odd_sum + i;
	}

	printf("짝수의 합: %d\n", even_sum);
	printf("홀수의 합: %d\n", odd_sum);

	return 0;
}
*/
