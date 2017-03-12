/*

//첫번째 입력은
//알파벳을 입력하면 ASCII코드값을 출력해 주고

//두번째 입력은
//ASCII값을 입력하면 문자를 출력해주는 프로그램


#include <stdio.h>

int main(void){

	char val1;
	int val2;

	//알파벳을 입력하면 ASCII코드값을 출력해 주고
	printf("문자 입력 > ");
	fflush(stdout);
	scanf("%c", &val1);
	//ASCII코드값을 출력
	printf("ASCII코드값: %d\n", val1);

	//ASCII값을 입력하면 문자를 출력해주는 프로그램
	printf("ASCII 코드 값 입력 >");
	fflush(stdout);
	scanf("%d", &val2);
	printf("문자는 %c\n", val2);

	return 0;
}
*/
