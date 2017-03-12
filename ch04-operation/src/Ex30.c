/*

//continue문
//-continue; 반복문의 처음 시작 부분으로 이동하게 됩니다. (제어문)
//-특정조건일 때 반복문의 해당 반복 회차만 건너뛰고
// 다음 회차로 넘어가 수행을 반복하게 됩니다.
//-while, for, do~while
//-switch문에는 사용할 수 없음

//for(초기식; 조건식; 증감식){
//
//	if()
//		continue;
//
//	수행구문;
//	수행구문;
//}


//1부터 100까지의 정수 중 짝수만 출력하는 프로그램
//for문, if문, continue;

#include <stdio.h>

int main(void){

	int num;

	for(num=0; num<=100 ; num++){

		if(num%2!=0)
			continue;
		printf("짝수: %d\n", num);

	}


	return 0;
}
*/
