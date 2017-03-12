/*

//자료형 재정의

//typedef 키워드 사용해서 자료형의 재정의
//- 기본 자료형들에 새로운 이름을 붙여주게 됩니다.
//- 자료형을 간결하게 표현 가능
//- 프로그램의 가독성 높여 줍니다.
//- 너무 남용하게되면 자료형 분석시 혼란 초래

//typedef [기본 자료형] [새로운 자료형 이름];
//typedef int mytype;

#include <stdio.h>

//int 자료형을 cash라는 이름으로 재정의해서 사용하겠다는 의미
typedef int cash;

int main(void){

	cash num1=1000;
	cash num2=10000;
	cash num3=5000;
	int num4=2000;
	cash total=0;

	total = num1 + num2 + num3 + num4;

	printf("total amount: %d won\n", total);

	return 0;
}
*/
