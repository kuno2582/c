/*

//*연산자
//-메모리의 주소 앞에 사용
//-*는 메모리 공간에 저장된 값을 참조하는 연산자입니다.
//-*&는 상쇄(*&a=a), &*


#include <stdio.h>

int main(void){

	int array[5] = {10, 20, 30, 40, 50};

	//배열 이름가지고 주소 출력
	printf("%x, %x, %x, %x, %x\n",
			array+0, array+1, array+2, array+3, array+4);

	//각 배열의 요소를 주소 출력
	printf("%x, %x, %x, %x, %x\n",
	&array[0], &array[1], &array[2], &array[3], &array[4]);

	//각 배열 요소의 값 출력
	printf("%d, %d, %d, %d, %d\n",
	array[0], array[1], array[2], array[3], array[4]);

	//*연산자로 각 배열요소의 값 출력
	printf("%d, %d, %d, %d, %d\n",
	*&array[0], *&array[1], *&*&*&*&*&*&array[2], *&array[3], *&array[4]);

	//배열이름을 통해 *연산자를 사용하여 값도 출력
	printf("%d, %d, %d, %d, %d\n",
	*(array+0), *(array+1), *(array+2), *(array+3), *(array+4));
	printf("%d, %d, %d, %d, %d\n",
	*(array), *(array+1), *(array+2), *(array+3), *(array+4));

	return 0;
}
*/
