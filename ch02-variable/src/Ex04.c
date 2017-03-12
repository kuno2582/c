/*

//강제 형변환
//정수를 나눌 경우 데이터 손실 발생
//5/2, 10/3

//강제 형변환
//- 큰 자료형에서 작은 자료형으로 변환시 사용
//- 프로그래머가 강제로 형변환을 할 때 사용
//- 이미 정의된 자료형을 강제적으로 다른 자료형으로 변환하고자 할 때
//- 자동형변환이 일어나는 시점을 명확하게 표시하기 위해서 사용
//- ()를 사용하여 바꿀 자료형을 표시해 줍니다.
//- (바꿀 자료형)변수
//- int num=10;
//- (double)num;

#include <stdio.h>

int main(void){

	int num1=10;
	int num2=3;

	double result;
	result = num1/num2; //정수/정수 -> 실수
	printf("결과1: %lf \n", result);

	result = (double)num1/num2; //실수/정수
	printf("결과2: %lf \n", result);

	result = num1/(double)num2;
	printf("결과3: %lf \n", result); //정수/실수

	result = (double)num1/(double)num2; //실수/실수
	printf("결과4: %lf \n", result);

	return 0;
}
*/
