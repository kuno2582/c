/*

//����Լ�(Recursive Function)
//- �Լ������� �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ�
//- ��� ȣ��(Recursive call): �ڱ� �ڽ��� ȣ�� ����

//��� ȣ���� ������
//�ð��� �޸� ������ ȿ���� ���� �� �� �ֽ��ϴ�. ���߿� ������ ���ؾ� �մϴ�.

#include <stdio.h>

void recursiveCall(void);

int main(void){

	recursiveCall();

	return 0;
}

void recursiveCall(void){
	printf("Recursive Call\n");
	recursiveCall();
}
*/
