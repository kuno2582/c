/*

//2차원 배열의 이름은 2차원 배열의 시작 주소

//2차원 배열의 다양한 주소 표현
//1) 2차원 배열 이름은 2차원 배열의 시작 주소
//2) 2차원 배열의 행의 요소는 행을 대표하는 주소
//3) 2차원 배열에서 array[i] == *(array+i)는 주소

#include <stdio.h>

int main(void){

	int array[2][2]={ {10, 20},
					{30, 40}};

	printf("%x %x\n", array, array+0);
	printf("%x\n", array+1);


	return 0;
}
*/
