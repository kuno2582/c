/*

//�ܺκ���(Extern variable)
//-�ܺ� ���Ͽ� ����� ������ �����ϴ� ����
//-�ڷ��� �տ� externŰ���带 ���
//-�ٸ����Ͽ� �ִ� ���������� ����

//Ex11.c	main��
//Ex12.c	����, �Լ� ����

#include <stdio.h>

extern void add(void);

int main(void){

	extern int num1;
	extern int num2;
	extern int num3;

	printf("num1�� ��: %d\n", num1);
	printf("num2�� ��: %d\n", num2);
	printf("num3�� ��: %d\n", num3);
	printf("���� ���: %d\n", num1+num2+num3);

	add();

	return 0;
}
*/
