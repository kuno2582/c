/*



//특정 파일의 전역변수를 외부에서 참조하지 못하게 하려면
//- 보안을 위해 외부에서 참조를 못하게 할 수 있습니다.
//- static키워드를 사용


#include <stdio.h>

int main(void){

	extern int num1;
	extern int num2;
	extern int num3;
	extern int password;

	printf("num1의 값: %d\n", num1);
	printf("num2의 값: %d\n", num2);
	printf("num3의 값: %d\n", num3);
	printf("password의 값: %d\n", password);

	return 0;
}

*/
