/*

//if문 활용
//if문을 활용해서 1부터 100까지의 숫자중 특정수의 배수만 출력
//TODO 1: 7의 배수 출력하기
//TODO 2: 4의 배수이고 6의 배수인 수 출력하기

//힌트
//반복문 - for문
//조건문 - if문

#include <stdio.h>

int main(void){

	int num;
	printf("7의 배수: \n");
	for(num=1; num<=100 ; num++){

		if(num%7==0)
			printf("%d\n", num);

	}


	printf("4의 배수이고 6의 배수: \n");
	for(num=1; num<=100 ; num++){
		if( (num%4==0) && (num%6==0) )
			printf("%d\n", num);
	}

	return 0;
}
*/
