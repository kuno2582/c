/*

//�ּҹ�ȯ(return)
//�ʿ伺: �뷮�� �����͸� ��ȯ�Ҷ� ���
//���ǻ���: ���������� �ּҸ� ��ȯ�ϰԵǸ� ���
//��� �߻�: static ����

//��/�ּҹ�ȯ
//return ��;
//return �ּ�;

#include <stdio.h>
int* input();

int main(void){

	int* p=NULL;

	p=input();
	printf("%d\n", *p);

	return 0;
}

int* input(){
	static int num;
	fflush(stdout);
	scanf("%d", &num);
	return &num;
}
*/
