/*

//문자형은 char선호, ASCII코드를 참조해서 문자를 인식하게 됩니다.

//문자 특징
//- 컴퓨터는 문자를 인식하지 못합니다. 그래서 ASCII 코드를 참조해서 인식한다.
//- 문자형은 char 선호한다.

//char c = 'A';
//char e = "o";
//char f = '가';
//char d = a;

#include <stdio.h>

int main(void){

	char val1;

	val1 = 'A'; //문자가 변수에 저장될 때 먼저 ASCII코드 값을 참조해서 저장

	printf("%d, %c\n", val1, val1);

	val1 = 'B';
	printf("%d, %c\n", val1, val1);

	val1 = 'C';
	printf("%d, %c\n", val1, val1);

	return 0;
}
*/
