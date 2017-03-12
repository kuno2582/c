/*

//문자 바꾸기
//찾은 문자를 바꿀 문자로 변경하는 프로그램

//제한사항
//알파벳 문자열만 입력받고
//변환될 문자(찾을 문자, 바뀔문자)와 변환할 문자(바꿀 문자) 두개를 입력받아
//최초 발결되는 변환될 문자를 바뀔 문자로 교체해 주는 프로그램

//출력결과 예상
//영문문자열 입력하세요> XXAXXXXXXX
//변환될 문자(찾을 문자, 바뀔문자)입력 > A
//변환할 문자(바꿀 문자) 입력 > B
//문자 바꾸기 결과: XXBXXXXXXX

#include <stdio.h>
#include <string.h>

int main(void){

	char str[50];
	char ch1;
	char ch2;

	int i;

	printf("영문 문자열을 입력하세요 >");
	fflush(stdout);
	scanf("%[^\n]s", str);

	printf("변환될 문자(찾을 문자, 바뀔 문자) 입력 > ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch1);

	printf("변환할 문자(바꿀 문자) 입력 > ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch2);

	for(i=0; i<strlen(str) ;i++){
		if(str[i]==ch1)
			str[i]=ch2;
	}

	printf("문자 바꾸기 결과: %s\n", str);

	return 0;
}
*/
