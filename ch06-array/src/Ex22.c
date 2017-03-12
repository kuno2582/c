/*

//배열요소의 개수 구하기

//sizeof() 메소드
//-자료형의 크기를 구하는 함수
//-자료형에 할당된 메모리의 크기를 구할 수 있었습니다.

//sizeof()활용
//sizeof(자료형)		sizeof(int)		자료형의 메모리 크기 반환
//					int num1;
//sizeof(변수)		sizeof(num1)	변수의 메모리 크기를 반환
//					char array[17]
//sizeof(배열)		sizeof(array)	배열의 메모리 크기를 반환


#include <stdio.h>

int main(void){

	int numbers[] = { 512, 32, 7, 5580, 3628800, 1004, 2016, 2020 };

	//배열의 전체 바이트 수 출력
	printf("%d\n", sizeof(numbers));

	//배열요소 하나의 크기
	printf("%d\n", sizeof(numbers[0]));

	//배열 요소의 개수는
	printf("%d\n", sizeof(numbers)/sizeof(numbers[0]) );

	return 0;
}
*/
