/*

//변수의 시작주소 출력

//변수의 시작주소 출력 형식
//변수명 앞에 &을 붙이면 변수의 시작주소를 알 수 있습니다.
//&변수명
//& : 주소연산자, 변수의 시작주소를 출력
//주소값은 16진수로 출력

#include <stdio.h>

int main(void){

	int a=3;
	int b=7;

	int c;
//	int c = 10;
	c = 10;

	printf("a의 값: %d \n", a);
	printf("b의 값: %d \n", b);
	printf("c의 값: %d \n", c);

	printf("변수 a의 시작주소: %x \n", &a);
	printf("변수 b의 시작주소: %x \n", &b);
	printf("변수 c의 시작주소: %x \n", &c);

	printf("변수 c의 시작주소: %x \n", &c);
	printf("변수 b의 시작주소: %x \n", &b);
	printf("변수 a의 시작주소: %x \n", &a);

	printf("변수 c의 시작주소: %d \n", &c);
	printf("변수 b의 시작주소: %d \n", &b);
	printf("변수 a의 시작주소: %d \n", &a);

	printf("변수 c의 시작주소: %o \n", &c);
    printf("변수 b의 시작주소: %o \n", &b);
	printf("변수 a의 시작주소: %o \n", &a);

	return 0;
}
*/
