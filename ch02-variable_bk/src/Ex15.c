/*

//float형 오차 발생
//실수형은 기본적으로 double형을 선호하기 때문
//float형이 자동으로 double형으로 사용되어졌기 때문에 이를 해결하기 위해서는
//명시적으로 숫자의 뒤에 f를 붙여주어야 합니다.

#include <stdio.h>


int main(void){

	float num1=0.123456789012345;
	double num2=0.123456789012345;

	printf("float형: %f\n", num1);
	//float형:	0.123457
	//        	0.123456 789012345

	printf("double형: %lf\n", num2);

	//15자리까지 표현
	printf("float형: %.15f\n", num1);
	printf("double형: %.15lf\n", num2);

	float num3 = 0.123456F;

	printf("float형: %lf\n", num3);
	printf("float형: %.2lf\n", num3);


	return 0;
}
*/
