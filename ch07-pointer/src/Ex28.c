/*

//���� ���� ȣ��(Call by Value)
//- ����(�޸𸮰����� ����� ��) �Ǵ� ���� �����ؼ� �Լ� ȣ��
//- '��'�� �����ؼ� �ش� �Լ����� ���
//- ���� ������ ����� ���� ������� �ʴ´�.

//���� ���� ȣ�� ����
//�Լ��� ���ڿ� ���޵Ǵ� �Ű������� �������� �Ǵ� ����

#include <stdio.h>

int func(int i, int i2, int i3, int i4, int i5, int i6);

int main(void){
	int n=10;
	int result=0;

	result=func(n); //n=10, ���� �����ؼ� �ش� �Լ����� ���
	printf("%d\n", result);
	printf("%d\n", n);

	return 0;
}

int func(int i, int i2, int i3, int i4, int i5, int i6){ //i=10, ����� ���� �Լ����� ���
	i=i+1;
	return i;
}
*/
