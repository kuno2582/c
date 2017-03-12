/*

//자동 형변환(산술연산)
//다른 자료형간 산술연산을 할 경우에 작은자료형에서 큰 자료형으로 자동 형변환
//정수+실수 또는 실수+정수와 같은 산술연산을 하는 경우 자동 형변환

//자료형의 변환 우선 순위(작은자료형에서 큰 자료형으로)로 자동 형변환
//char < int < long < float < double < long double

#include <stdio.h>

int main(void){

	//자료형 변수명;
	int num1;
	num1 = 100;

	double num2=3.14;

	printf("정수는 %d\n", num1);
	printf("실수는 %lf\n", 3.14);
	printf("실수는 %lf\n", num2);

	//작은 자료형에서 큰 자료형으로 자동 형변환
	printf("%lf \n", num1+num2); //정수+실수
	printf("%d \n", num1+num2); //정수+실수

	printf("%lf \n", num1/num2);

	//소주점 2째자리까지 출력
	printf("%.2lf \n", num1+num2);

	return 0;
}
*/
