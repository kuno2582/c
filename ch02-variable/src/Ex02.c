/*

//�ڵ� ����ȯ(�������)
//�ٸ� �ڷ����� ��������� �� ��쿡 �����ڷ������� ū �ڷ������� �ڵ� ����ȯ
//����+�Ǽ� �Ǵ� �Ǽ�+������ ���� ��������� �ϴ� ��� �ڵ� ����ȯ

//�ڷ����� ��ȯ �켱 ����(�����ڷ������� ū �ڷ�������)�� �ڵ� ����ȯ
//char < int < long < float < double < long double

#include <stdio.h>

int main(void){

	//�ڷ��� ������;
	int num1;
	num1 = 100;

	double num2=3.14;

	printf("������ %d\n", num1);
	printf("�Ǽ��� %lf\n", 3.14);
	printf("�Ǽ��� %lf\n", num2);

	//���� �ڷ������� ū �ڷ������� �ڵ� ����ȯ
	printf("%lf \n", num1+num2); //����+�Ǽ�
	printf("%d \n", num1+num2); //����+�Ǽ�

	printf("%lf \n", num1/num2);

	//������ 2°�ڸ����� ���
	printf("%.2lf \n", num1+num2);

	return 0;
}
*/
