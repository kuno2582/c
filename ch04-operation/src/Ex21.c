/*

//if�� Ȱ��
//if���� Ȱ���ؼ� 1���� 100������ ������ Ư������ ����� ���
//TODO 1: 7�� ��� ����ϱ�
//TODO 2: 4�� ����̰� 6�� ����� �� ����ϱ�

//��Ʈ
//�ݺ��� - for��
//���ǹ� - if��

#include <stdio.h>

int main(void){

	int num;
	printf("7�� ���: \n");
	for(num=1; num<=100 ; num++){

		if(num%7==0)
			printf("%d\n", num);

	}


	printf("4�� ����̰� 6�� ���: \n");
	for(num=1; num<=100 ; num++){
		if( (num%4==0) && (num%6==0) )
			printf("%d\n", num);
	}

	return 0;
}
*/
