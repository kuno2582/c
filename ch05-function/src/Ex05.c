/*

//함수의 다양한 형태

//예상 출력결과
//프로그램 시작
//첫 번째 실수를 입력하세요 > 10
//두 번째 실수를 입력하세요 > 7
//나눗셈 결과 : ?????
//프로그램 종료

#include <stdio.h>

//함수 선언 영역
double divide(double x, double y);
double input(void);
void output(double x);
void start(void);
void end(void);

int main(void){
	double num1, num2, result;

	start();
	printf("첫 번째 실수를 입력하세요 >");
	num1 = input();
	printf("두 번째 실수를 입력하세요 >");
	num2 = input();
	result = divide(num1, num2);
	output(result);

	end();
	return 0;
}

//함수의 정의(출력O 입력O)
double divide(double x, double y){
	double x;
	val = x/y;

	return val;
}

//함수의 정의 (출력O 입력X)
double input(void){
	double val;
	fflush(stdout);
	scanf("%lf", &val);

	return val;
}

//함수의 정의 (출력X 입력O)
void output(double x){
	printf("나눗셈 결과: %lf\n", x);

	return;
}

//함수의 정의 (출력X 입력X)
void start(void){
	printf("프로그램 시작\n");
	return;
}

void end(void){
	printf("프로그램 종료\n");
	return ;
}
*/
