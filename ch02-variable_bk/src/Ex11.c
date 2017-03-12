/*

//signed & unsigned

//signed	부호가 있는
//			음수, 0, 양수를 모두 표현
//			signed는 주로 생략

//unsigned	부호가 없는
//			0, 양수만을 표현
//			unsigned를 사용할 경우에는 반드시 unsigned로 꼭 지정
//			정수형의 양수범위를 두배로 늘려서 표현

#include <stdio.h>

int main(void){

	signed char num1=129; //-128~127의 데이터 표현
	unsigned char num2=129; // 0~256

	printf("%d\n", num1);

	printf("%d\n", num2);

	return 0;
}
*/
