/*

//논리 연산자

//&&연산자
//- AND 연산자(논리곱)
//- ~이고(그리고)
//- 둘다 참이어야 참
//피연산자	연산자	피연산자	결과
//0			&&		0		0
//0			&&		1		0
//1			&&		0		0
//1			&&		1		1
//(num1 > num2) && (num1 > num2)

//||연산자
//- OR 연산자(논리합)
//- ~이거나(또는)
//- 둘중 하나만 참이어도 참
//피연산자	연산자	피연산자	결과
//0			||		0		0
//0			||		1		1
//1			||		0		1
//1			||		1		1

//!연산자
//- NOT연산자(논리 부정)
//- ~아니다(부정)
//- 참이면 거짓, 거짓이면 참
//연산자	피연산자	결과
//!		0		1
//!		1		0


#include <stdio.h>

int main(void){

	int num1=2, num2=5, num3=100;
	int result1, result2, result3, result4;

	result1 = (num1>0) && (num2<10);
	printf("result1에 저장된 값: %d \n", result1);

	result2 = (num1>0) && (num2>10);
	printf("result2에 저장된 값: %d \n", result2);

	result3 = (num2<=2) || (num3<8);
	printf("result3에 저장된 값: %d \n", result3);

	result4 = !num3;
	printf("result에 저장된 값: %d \n", result4);


	return 0;
}
*/
