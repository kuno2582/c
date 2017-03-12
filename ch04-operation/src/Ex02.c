/*

//while 반복문을 사용해서 합계
//1+2+3+4+5+6+7+8+9
#include <stdio.h>

int main(void){
	//초기값
	int i=0;
	int sum =0;

	//조건값
	while(i<10){ // 0 1 2 3
		sum = sum + i; // 0= 0+0, 1=0+1, 3=1+2, 6 =3+3
		printf("i= %d, sum=%d\n ", i, sum); // 0, 0 / 1, 1/2, 3
		//증감값
		i++; // 1, 2, 3

	}
	printf("반복문 종료\n");

	return 0;
}
*/
