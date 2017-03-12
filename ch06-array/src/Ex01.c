/*
//1차원 배열
//- 행으로만 이루어진 배열
//- 1차원 배열의 개수 = 행수

//배열 선언방법
//->1) 배열 선언 한 후 초기화
//2) 배열 선언과 동시에 초기화

//배열 선언 형식
//자료형 배열이름[배열길이];
//int array[10]

#include <stdio.h>

int main(void){

	//배열 선언
	int array[5]; // 20 byte

	//배열 초기화
	array[0] = 90;
	array[1] = 80;
	array[2] = 70;
	array[3] = 60;
	array[4] = 50;

	printf("첫번째 array의 값: %d\n", array[0]);
	printf("두번째 array의 값: %d\n", array[1]);
	printf("세번째 array의 값: %d\n", array[2]);
	printf("네번째 array의 값: %d\n", array[3]);
	printf("다섯번째 array의 값: %d\n", array[4]);

	return 0;
}
*/
