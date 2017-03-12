/*

//복합 대입 연산자
//산술연산자(+, -, *, /, %)와 대입연산자(=)를 하나로 나타내는 연산자

//	a += b	 a = a + b
//	a -= b	 a = a - b
//	a *= b	 a = a * b
//	a /= b	 a = a / b
//	a %= b	 a = a % b

#include <stdio.h>

int main(void){

	int num1=1, num2=2, num3=3, num4=4, num5=5;

//	num1 = num1 + num2;
	num1 += num2;
	printf("복합 덧셈 연산 결과: %d\n", num1);

//	num2 = num2 - 2;
	num2 -= 2;
	printf("복합 뺄셈 연산 결과: %d\n", num2);

//	num3 = num3 * 2;
	num3 *= 2;
	printf("복한 곱셈 연산 결과: %d\n", num3);

//	num4 = num4 / 2;
	num4 /= 2;
	printf("복합 나눗셈 연산 결과: %d\n", num4);


//	num5 = num5 % 2;
	num5 %= 2;
	printf("복합 나머지 연산 결과: %d\n", num5);

	printf("%d, %d, %d, %d, %d", num1, num2, num3, num4, num5);




	return 0;
}
*/
