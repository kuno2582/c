/*

//�ּҿ� ���� ȣ��(Call By Reference)
//-�ּ�(�޸� ������ �ּ�)�� �����ؼ� �Լ� ȣ��
//-���� ����ִ� '�ּ�'�� ����
//-�������� ���� ���� ������ ����� ���� ������ �ǰ� �˴ϴ�.

#include <stdio.h>

int main(void){

	int n=10;
	int result=0;

	result=func(&n); //���� ����ִ� �ּ� ����
	printf("%d\n", result);
	printf("%d\n", n);

	return 0;
}

int func(int* i){ //i=&n, ���� ����ִ� �ּҸ� ���� ����
	*i=*i+1;

	return *i;
}
*/
