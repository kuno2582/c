/*

//중첩 while문
//while문 내부에 또 다른 while문이 있는 문장


//중첩 while 문의 형식
//while(조건식){
//	while(조건식){
//
//
//	}
//}

#include <stdio.h>

int main(void){

	//초기값
	int i=0;
	int j=0;

	while(i<2){
		printf("외부 반복: i(%d) j(%d)\n", i, j);

		while(j<3){
			printf("내부 반복: i(%d) j(%d)\n", i, j);

			j++;
		}
		j=0;

		i++;
	}

	return 0;
}
*/
