/*

//������ ��� ���α׷�
//����� ���� �Է�
//���� �Լ� ȣ��
//�������� ����ϴ� �κ��� �Լ��� �ϼ��Ͻñ� �ٶ��ϴ�.

//����� ���� �Է��ϼ��� > 7
//7 * 1 = 7
//7 * 2 = 14
//...


#include <stdio.h>
void gugudan(int dan);

int main(void){

	int dan;
	//�Է¹��� �κ�
	printf("����ϰ� ���� ���� �Է��ϼ��� > ");
	fflush(stdout);
	scanf("%d", &dan);
	//�Լ� ȣ��
	gugudan(dan);
	return 0;
}

void gugudan(int dan){
	//������ ��� -> �Լ� ���� -> ��ȯ�� X

	int i;

	for(i=1; i<=9 ; i++){
		printf("%d * %d = %d\n", dan, i, dan*i);
	}

	return ;
}
*/
