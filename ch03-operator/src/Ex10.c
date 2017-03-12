/*

//관계연산자
//관계를 비교하여 참(True)과 거짓(False)으로 결론을 짓는 연산자

//관계 연산의 결과는 1(참), 0(거짓)을 반환
// a > b	a가 b보다 클지를 비교
// a < b 	a가 b보다 작은지를 비교
// a >= b	a가 b보다 크거나 같을지를 비교
// a <= b  	a가 b보다 작거나 같을지를 비교
// a == b	a와 b가 같은지를 비교
// a != b	a와 b가 같지 않은지를 비교

#include <stdio.h>

int main(void){

	int num1=2, num2=7;
	int result1, result2, result3, result4;

//	result1 = num1 > num2;
//	result2 = num1 <= num2;
//	result3 = num1 == num2;
//	result4 = num1 != num2;

			//num1=2, num2=7;
	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1에 저장된 값: %d\n", result1);
	printf("result2에 저장된 값: %d\n", result2);
	printf("result3에 저장된 값: %d\n", result3);
	printf("result4에 저장된 값: %d\n", result4);

	return 0;
}
*/
