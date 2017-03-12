/*

//영문문자열 거꾸로 출력하는 프로그램

//제한사항
//10글자 이하의 문자열을 입력받고,
//입력받은 문자열의 순서를 거꾸로 해서 출력해 주시기 바랍니다.

//출력결과 예상
//영문 문자열을 입력하세요(10자 이하)>abcdefg
//   gfedcba

#include <stdio.h>

int main(void){

	char str[10] = "          ";
	int i;

	//입력
	printf("영문 문자열을 입력하세요(10자 이하) > ");
	fflush(stdout);
	scanf("%s", str);
	//출력
	for(i=sizeof(str)-1; i >= 0; i--){
		printf("%c", str[i]);
	}

	return 0;
}
*/
