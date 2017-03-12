/*

//for문을 이용해서 1~10까지의 곱셈값 구하기
//1* 2* 3* 4* 5* 6* 7* 8* 9* 10 = ?

#include <stdio.h>

int main(void){

	int i;
	int sum=1;

	for(i=1;i<=10; i++ ){
		 sum = sum * i;
		 printf("i=%d, sum=%d\n", i, sum);
	}
	printf("반복문 종료\n");

	return 0;
}
*/
