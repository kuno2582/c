/*

//����
//�μ��� +, -, *, /, %������ �����ϴ� ���α׷�

//if~else
//switch~case

#include <stdio.h>

int main(void){

	int a, b;
	char ch;

//	printf("ù��° �ǿ��ڼ��� �Է��ϼ��� > ");
//	fflush(stdout);
//	scanf("%d", &a);
//

	printf("�ǿ��� ���� �Է��ϼ��� > ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &a, &b);
	fflush(stdin);

	printf("����� �����ڸ� �Է��ϼ��� >");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch);

//	scanf("%*c%c", &ch);

//	scanf("%c", &ch);
//	scanf("%c", &ch);

//	printf("�ι�° �ǿ��ڼ��� �Է��ϼ��� > ");
//	fflush(stdout);
//	scanf("%d", &b);

	if(ch=='+'){
		printf("%d + %d = %d �Դϴ�.\n", a, b, a+b);
	}else if(ch=='-'){
		printf("%d - %d = %d �Դϴ�.\n", a, b, a-b);
	}else if(ch=='*'){
		printf("%d * %d = %d �Դϴ�.\n", a, b, a*b);
	}else if(ch=='/'){
		printf("%d / %d = %d �Դϴ�.\n", a, b, a/b);
	}else if(ch=='%'){
		printf("%d %% %d = %d �Դϴ�.\n", a, b, a%b);
	}

	switch(ch){
	case '+':
		printf("%d + %d = %d �Դϴ�.\n", a, b, a+b);
		break;
	case '-':
		printf("%d - %d = %d �Դϴ�.\n", a, b, a-b);
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�.\n", a, b, a*b);
		break;
	case '/':
		printf("%d / %d = %d �Դϴ�.\n", a, b, a/b);
		break;
	case '%':
		printf("%d %% %d = %d �Դϴ�.\n", a, b, a%b);
		break;
	}

	return 0;
}

*/
