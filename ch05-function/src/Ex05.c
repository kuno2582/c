/*

//�Լ��� �پ��� ����

//���� ��°��
//���α׷� ����
//ù ��° �Ǽ��� �Է��ϼ��� > 10
//�� ��° �Ǽ��� �Է��ϼ��� > 7
//������ ��� : ?????
//���α׷� ����

#include <stdio.h>

//�Լ� ���� ����
double divide(double x, double y);
double input(void);
void output(double x);
void start(void);
void end(void);

int main(void){
	double num1, num2, result;

	start();
	printf("ù ��° �Ǽ��� �Է��ϼ��� >");
	num1 = input();
	printf("�� ��° �Ǽ��� �Է��ϼ��� >");
	num2 = input();
	result = divide(num1, num2);
	output(result);

	end();
	return 0;
}

//�Լ��� ����(���O �Է�O)
double divide(double x, double y){
	double x;
	val = x/y;

	return val;
}

//�Լ��� ���� (���O �Է�X)
double input(void){
	double val;
	fflush(stdout);
	scanf("%lf", &val);

	return val;
}

//�Լ��� ���� (���X �Է�O)
void output(double x){
	printf("������ ���: %lf\n", x);

	return;
}

//�Լ��� ���� (���X �Է�X)
void start(void){
	printf("���α׷� ����\n");
	return;
}

void end(void){
	printf("���α׷� ����\n");
	return ;
}
*/
