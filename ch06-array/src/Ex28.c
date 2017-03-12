/*

//대소문자 변환 프로그램
//입력된 문자중 대문자는 소문자로, 소문자는 대문자로 변환하고
//그외의 문자는 그대로 출력되게 하는 프로그램

#include <stdio.h>

int main(void){

	char strIn[50];
	char strOut[50];
	int i;
	int strLength;
	int diff = 'a' - 'A';

	printf("알파벳 문자열을 입력하세요 >");
	fflush(stdout);
//	scanf("%[^\n]s", strIn);
	gets(strIn);

	printf("입력받은 문자열: %s\n", strIn);

	strLength = strlen(strIn);

	for(i=0; i<strLength ;i++){
		if( 'A'<=strIn[i] && strIn[i] <='Z' ){
			strOut[i] = strIn[i] + diff;
		}else if( 'a' <= strIn[i] && strIn[i] <='z'  ){
			strOut[i] = strIn[i] - diff;
		}else
			strOut[i] = strIn[i];
	}
	strOut[i]='\0';

	printf("변환 후 문자열: %s\n", strOut);

	return 0;
}


*/
