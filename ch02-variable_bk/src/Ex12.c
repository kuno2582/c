/*

//정수형 오버플로우 & 언더플로우

//사용자로부터 입력받는 값, 무조건 자료형 범위 확인

#include <stdio.h>

int main(void){

	//정수형 char 1byte -128~127

	char num1 = -129; //최소값보다 -1만큼 작은 값 저장 (언더플로우)
	char num2 = 128; //최대값보다 +1만큼 큰 값 저장(오버플로우)

	printf("%d\n", num1);
	printf("%d\n", num2);

	num1 = -130; //최소값보다 -2만큼 작은 값 저장 (언더플로우)
	num2 = 129; //최대값보다 +2만큼 큰 값 저장(오버플로우)

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}
*/
