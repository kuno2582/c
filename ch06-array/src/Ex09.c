/*

//다차원 배열
//2차원 이상의 배열을 의미

//2차원 배열
//-행과 열로 만들어진 배열
//-2차원 배열의 크기는 = 행수 * 열수

//2차원 배열의 선언 형식
//자료형 배열명[행][열]
//int array[4][3]

#include <stdio.h>

int main(void) {

	int array[4][3];

	array[0][0]=1; array[0][1]=2; array[0][2]=3;
	array[1][0]=4; array[1][1]=5; array[1][2]=6;
	array[2][0]=7; array[2][1]=8; array[2][2]=9;
	array[3][0]=10; array[3][1]=11; array[3][2]=12;

	printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
	printf("%d %d %d\n", array[3][0], array[3][1], array[3][2]);

	return 0;
}
*/
