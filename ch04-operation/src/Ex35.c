/*

//1~100 ������ ������
//Ȧ���� �հ� ¦���� ���� ���ϴ� ���α׷�

//����
//���� ����� �ʱ�ȭ

#include <stdio.h>

int main(void){

	int i;

	int even_sum = 0;
	int odd_sum = 0;

	for(i=1; i<=100 ; i++){
		if(i%2==0)
			even_sum = even_sum + i;
		else
			odd_sum = odd_sum + i;
	}

	printf("¦���� ��: %d\n", even_sum);
	printf("Ȧ���� ��: %d\n", odd_sum);

	return 0;
}
*/
