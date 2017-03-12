/*


//문자 상수
//-작은 따옴표('')내에 포함된 하나의 문자
//-키보드로 표현할 수 있는 영문자, 숫자, 특수문자
//-문자 그 자체

//문자 배열
//- 문자 상수를 저장하는 배열
//- 배열에 저장된 문자는 변경 가능


#include <stdio.h>

int main(void){

	char array[]={'A', 'B', 'C', 'D', 'E'};

	printf("문자 상수: %c %c %c %c %c\n"
			, 'A', 'B', 'C', 'D', 'E');

	printf("문자 배열의 변경 전 값: %c %c %c %c %c\n"
			, array[0], array[1], array[2], array[3], array[4]);

	array[0]='J';
	array[1]='O';
	array[2]='Y';
	array[3]='M';
	array[4]='A';

	printf("문자 배열의 변경 후 값: %c %c %c %c %c\n"
			, array[0], array[1], array[2], array[3], array[4]);

	printf("문자 배열 array크기: %d\n", sizeof(array));

	return 0;
}
*/
