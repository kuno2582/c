/*

//����Լ� ȣ��� ���ѷ��� ���� �ذ�
//- ����Լ��� ������ �ذ��ϱ� ���ؼ��� return�� �߰�(�Լ��� �����ϰ� ��ȯ)
//- ����Լ� ȣ�� ���� �����ϱ� ���� ������ �ݵ�� �����־�� �մϴ�.


#include <stdio.h>

void recursiveCall(void);

int main(void){

	recursiveCall();

	return 0;
}

void recursiveCall(void){

	static int i=1;

	if(i>7){
		return;
	}

	printf("Recursive Call %dȸ ����\n", i);
	i=i+1;

	recursiveCall(); //
}
*/
