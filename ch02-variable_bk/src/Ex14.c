/*

//실수는 double형 선호
//실수형을 쓸때는 오차를 줄이기 위해 double형을 선호합니다.
//컴파일러는 기본적으로 실수형을 double로 인식


#include <stdio.h>

int main(void){

	float num1 = 3.25e+30;
	double num2 = 3.25e+30;

	//%f, %lf: 고정 소수점 출력
	//%e, %le: 부동 소수점 출력
	printf("%f, %e\n", num1, num1);

	printf("%lf, %le\n", num2, num2);


	return 0;
}
*/
