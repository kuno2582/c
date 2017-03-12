/*

//계산기
//두수의 +, -, *, /, %연산을 수행하는 프로그램

//if~else
//switch~case

#include <stdio.h>

int main(void){

	int a, b;
	char ch;

//	printf("첫번째 피연자수를 입력하세요 > ");
//	fflush(stdout);
//	scanf("%d", &a);
//

	printf("피연자 수를 입력하세요 > ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &a, &b);
	fflush(stdin);

	printf("계산할 연산자를 입력하세요 >");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch);

//	scanf("%*c%c", &ch);

//	scanf("%c", &ch);
//	scanf("%c", &ch);

//	printf("두번째 피연자수를 입력하세요 > ");
//	fflush(stdout);
//	scanf("%d", &b);

	if(ch=='+'){
		printf("%d + %d = %d 입니다.\n", a, b, a+b);
	}else if(ch=='-'){
		printf("%d - %d = %d 입니다.\n", a, b, a-b);
	}else if(ch=='*'){
		printf("%d * %d = %d 입니다.\n", a, b, a*b);
	}else if(ch=='/'){
		printf("%d / %d = %d 입니다.\n", a, b, a/b);
	}else if(ch=='%'){
		printf("%d %% %d = %d 입니다.\n", a, b, a%b);
	}

	switch(ch){
	case '+':
		printf("%d + %d = %d 입니다.\n", a, b, a+b);
		break;
	case '-':
		printf("%d - %d = %d 입니다.\n", a, b, a-b);
		break;
	case '*':
		printf("%d * %d = %d 입니다.\n", a, b, a*b);
		break;
	case '/':
		printf("%d / %d = %d 입니다.\n", a, b, a/b);
		break;
	case '%':
		printf("%d %% %d = %d 입니다.\n", a, b, a%b);
		break;
	}

	return 0;
}

*/
