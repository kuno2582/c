/*

//구구단 프로그램
//구구단을 2차원 배열로 출력

//제한사항
//-구구단을 배열로 완성
//-완성된 구구단 배열을 이용해서 구구단 출력
//-구구단의 결과는 2자리수로 표현해 주시기 바랍니다.

//출력예산 결과
//1x1=01	  2X1=02  ...... 9x1=09
//1x2=02      2x2=04  ...... 9x2=18
//......
//1x9=09	  2x9=18  ...... 9x9=81

#include <stdio.h>

int main(void){

	int gugudan[9][9];
	int dan, i;


	for(dan=0; dan<9; dan++){
		for(i=0; i<9; i++){
			gugudan[dan][i]=(dan+1)*(i+1);
		}
	}

	for(dan=0; dan<9; dan++){
		for(i=0; i<9; i++){
			printf("%dx%d=%02d   ", i+1, dan+1, gugudan[dan][i]);
		}
		printf("\n");
	}

	return 0;
}
*/
