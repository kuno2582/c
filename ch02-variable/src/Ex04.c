/*

//���� ����ȯ
//������ ���� ��� ������ �ս� �߻�
//5/2, 10/3

//���� ����ȯ
//- ū �ڷ������� ���� �ڷ������� ��ȯ�� ���
//- ���α׷��Ӱ� ������ ����ȯ�� �� �� ���
//- �̹� ���ǵ� �ڷ����� ���������� �ٸ� �ڷ������� ��ȯ�ϰ��� �� ��
//- �ڵ�����ȯ�� �Ͼ�� ������ ��Ȯ�ϰ� ǥ���ϱ� ���ؼ� ���
//- ()�� ����Ͽ� �ٲ� �ڷ����� ǥ���� �ݴϴ�.
//- (�ٲ� �ڷ���)����
//- int num=10;
//- (double)num;

#include <stdio.h>

int main(void){

	int num1=10;
	int num2=3;

	double result;
	result = num1/num2; //����/���� -> �Ǽ�
	printf("���1: %lf \n", result);

	result = (double)num1/num2; //�Ǽ�/����
	printf("���2: %lf \n", result);

	result = num1/(double)num2;
	printf("���3: %lf \n", result); //����/�Ǽ�

	result = (double)num1/(double)num2; //�Ǽ�/�Ǽ�
	printf("���4: %lf \n", result);

	return 0;
}
*/
