/*


#include <stdio.h>

char upperCase(char ch);
char lowerCase(char ch);

int main(void){

	char strin[50];
	char strout[50];
	char ch;
	char i=0;

	printf("문자열 입력 >");
	fflush(stdout);
	scanf("%[^\n]s", strin);

	do{

		ch = strin[i];

		if(ch >='A' && ch<='Z'){
			strout[i]=lowerCase(ch);

		}else if(ch >='a' && ch<='z'){
			strout[i]=upperCase(ch);
		}else{
			strout[i]=ch;
		}

		i++;
	}while(ch !='\0');
	strout[i]='\0';

	printf("대소문자가 변환된 문자열: %s\n", strout);

	return 0;
}

char upperCase(char ch){

	return ch - ('a'-'A');
}

char lowerCase(char ch){

	return ch + ('a' -'A');
}

*/
