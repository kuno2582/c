/*

//1차원 배열의 주소와 값

//&연산자(주소연산자)
//-&는 주소를 참조하는 연산자
//-메모리 공간의 주소 표현
//-%p(16진수 정수형): 주소 출력

#include <stdio.h>

int main(void){

	char array1[5]={'A', 'B', 'C', 'D', 'E'};
	int array2[5]={1, 2, 3, 4, 5};

	//%x로 출력(각 배열 요소의 주소)
	printf("array1: %x %x %x %x %x\n",
			&array1[0], &array1[1], &array1[2], &array1[3], &array1[4]);
	printf("array2: %x %x %x %x %x\n",
			&array2[0], &array2[1], &array2[2], &array2[3], &array2[4]);

	//%d로 출력
	printf("array1: %d %d %d %d %d\n)",
			&array1[0], &array1[1], &array1[2], &array1[3], &array1[4]);
	printf("array2: %d %d %d %d %d\n",
			&array2[0], &array2[1], &array2[2], &array2[3], &array2[4]);

	//%p
	//-포인터의 주소 형식 지정자(서식문자)
	//-변수의 값아닌 변수의 주소를 표현
	//-주소값 출력
	printf("array1: %p %p %p %p %p\n",
			&array1[0], &array1[1], &array1[2], &array1[3], &array1[4]);
	printf("array2: %p %p %p %p %p\n",
			&array2[0], &array2[1], &array2[2], &array2[3], &array2[4]);

	return 0;
}
*/
