/*

//����
//�ǿ����� �ΰ��� �Է¹޾�
//�������(+, -, *, /, %)�� ����� ����ϴ� ���α׷�

//ù��° �ǿ����� ���� �Է��ϼ��� => �Է�
//�ι�° �ǿ����� ���� �Է��ϼ��� => �Է�
//�������(+, -, *, /, %)�� ��� ���

//���� ����
//������ �Է�

#include <stdio.h>

int main(void){

	//���� ����
	int a, b;
	//
	float result;

	//
	printf("ù��° �ǿ����� ���� �Է��ϼ��� =>");
	//
	fflush(stdout);
	//
	scanf("%d", &a);

	printf("�ι�° �ǿ����� ���� �Է��ϼ��� =>");
	fflush(stdout);
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %5.2f \n", a, b, result);

	result = a - b;
	printf("%d - %d = %5.2f \n", a, b, result);

	result = a * b;
	printf("%d * %d = %5.2f \n", a, b, result);

	result = a / b;
	printf("%d / %d = %5.2f \n", a, b, result);

	result = a % b;
	printf("%d %% %d = %5.2f \n", a, b, result);

	return 0;
}
*/
