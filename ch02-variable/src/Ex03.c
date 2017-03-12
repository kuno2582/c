/*

//자동 형변환(대입연산자)
//대입연산자(=)를 기준으로 오른쪽에서 왼쪽으로 자동 형변환 일어납니다.

//형변환으로 인한 데이터 손실(주의)
//데이터 손실이 없는 경우
//-int형(작은 자료형)에서 double형(큰 자료형)으로 변환되는 경우
//-정수와 정수를 나누는 경우
//-확장변환(promotion; widening conversion)

//데이터 손실이 있는 경우
//-double형(큰 자료형)에서 int형(작은 자료형)으로 변환하는 경우
//-축소변환(demotion;narrowing conversion)
//자동형변환으로 인한 데이터 손실을 최소화하기 위해 강제 형변환 수행해주어야 합니다.

#include <stdio.h>

int main(void){
	//1byte, -128~127
	//작은 자료형 = 큰자료형
	char num1= 130; //데이터 손실

	//작은 자료형 = 큰 자료형
	int num2 = 3.14; //데이터 손실

	//큰 자료형 = 작은 자료형
	double num3 = 5; //데이터 손실 없음

	printf("%d, %d, %lf", num1, num2, num3);

	return 0;
}
*/
