/*

//do~while문
//-while문과 for문에 비해 사용빈도가 적습니다.
//-조건식이 참이든 거짓이든 무조건 한번은 반복할 내용을 실행하게 됩니다.
//-DB연동시 주로 사용

//while(조건식){
//	수행구문;
//}
//
//
//do{
//	수행구문;
//
//}while(조건식)


#include <stdio.h>

int main(void){

	int num=7;

	do{
		printf("%d\n", num);
		num++;

	}while(num<7);

	printf("while문 종료\n");
	printf("%d\n", num);

	return 0;
}
*/
