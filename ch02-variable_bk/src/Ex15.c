/*

//float�� ���� �߻�
//�Ǽ����� �⺻������ double���� ��ȣ�ϱ� ����
//float���� �ڵ����� double������ ���Ǿ����� ������ �̸� �ذ��ϱ� ���ؼ���
//��������� ������ �ڿ� f�� �ٿ��־�� �մϴ�.

#include <stdio.h>


int main(void){

	float num1=0.123456789012345;
	double num2=0.123456789012345;

	printf("float��: %f\n", num1);
	//float��:	0.123457
	//        	0.123456 789012345

	printf("double��: %lf\n", num2);

	//15�ڸ����� ǥ��
	printf("float��: %.15f\n", num1);
	printf("double��: %.15lf\n", num2);

	float num3 = 0.123456F;

	printf("float��: %lf\n", num3);
	printf("float��: %.2lf\n", num3);


	return 0;
}
*/
