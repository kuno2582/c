/*

//���� ����
//->- ��������(Local variable)
//- ��������(Global variable)
//- ��������(Static variable)
//- �ܺκ���(Extern variable)
//- �������� ����(Register variable)

//��������
//- �Լ� ���ο� ���
//- ���ǹ� �Ǵ� �ݺ����� �߰�ȣ({})���ο��� ���
//- �Լ��� �Է����·� ������ ������ ��������
//- �Լ��� �Ű�����(=�Լ��� ����=�Լ��� �Է°�=�Լ��� �Էº���)
//- {} ������ ����� �Ҵ�Ǿ��� �޸𸮰� �ڵ����� �Ҹ�˴ϴ�.

//�������� Ư¡
//- �ʱ�ȭ�� ���� ������ ������ ���� ����˴ϴ�.
//- ���������� �޸� ���������� �߰�ȣ������ �ʱ�ȭ�� ��
//- ���������� �޸� �Ҹ������ �߰�ȣ�� Ż���� ��
//- �ڵ�����(auto variable)

#include <stdio.h>

//�Լ��� ����
void functionOther(void);

int main(void){
	int localA=10;

	printf("main�� localA��: %d\n", localA); //10

	functionOther();
	return 0;
}

//�Լ��� ����
void functionOther(void){
	int localA=20;
	int localB=30;

	printf("functionOther�� localA��: %d\n", localA); //20
	printf("functionOther�� localB��: %d\n", localB); //30

	return;
}
*/
