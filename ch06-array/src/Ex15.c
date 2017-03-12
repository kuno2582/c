/*

//2차원 배열의 주소값 출력
//2차원 배열의 값 출력

#include <stdio.h>

int main(void){

	int array[2][3]={ {10, 20, 30},
						{40, 50, 60} };
	//각 배열요소의 주소
	printf("%x %x %x\n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x\n", &array[1][0], &array[1][1], &array[1][2]);

	//각 배열요소의 값
	printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);

	return 0;
}
*/
