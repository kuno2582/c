/*

//while문을 사용해서 곱셈한 결과
//1*2*3*4*5*6*7*8*9
//=362880
#include <stdio.h>

int main(void){

	int i=1;
	int sum=1;

	while(i<10){
		sum = sum*i;
		printf("i=%d, sum=%d\n", i, sum);

		i++;
	}

	printf("반복문 종료\n");



	return 0;
}
*/
