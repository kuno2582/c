/*

//������ �ڷ����� ������ ũ��Ȯ��
//�Ǽ��� �ڷ����� ������ ũ��Ȯ��

//�ڷ���: ������ �����ϴ� ������ ����

//sizeof()
//-  �ڷ����� ũ�⸦ ���ϴ� �޼ҵ�
//sizeof(�ڷ���)
//sizeof(������)

#include <stdio.h>

int main(void){

	char num1=10;	//1byte
	short num2=20;	//2byte
	int num3=30;	//4byte
	long num4=40;	//4byte

	float num5=3.14; //4byte
	double num6=3.25; //8byte
	long double num7=3.36; //8byte

	printf("char���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(char), sizeof(num1));
	printf("short���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(short), sizeof(num2));
	printf("int���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(int), sizeof(num3));
	printf("long���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(long), sizeof(num4));

	printf("float���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(float), sizeof(num5));
	printf("double���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(double), sizeof(num6));
	printf("double���� ũ��: %d����Ʈ, ������ �޸� ũ��: %d����Ʈ\n",
			sizeof(long double), sizeof(num7));


	return 0;
}
*/
