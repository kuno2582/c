/*

//if~else �Ѱ� -> �ذ��� �ڵ�
//else�� �ȿ� if~else���� ��������� �ذ�

#include <stdio.h>

int main(void){

		int num;
		printf("���ϴ�  ���� �Է� > ");
		fflush(stdout);
		scanf("%d", &num);

		if(num>0)
			printf("0���� ū �� ����\n");
		else{ //else�� �ȿ� if~else���� ��������� �ذ�
			//printf("0�Ǵ� 0���� ���� �� ����\n");
			if(num==0)
				printf("0�� �����\n");
			else{
				printf("0���� ���� �� ����\n");
			}

		}

	return 0;
}
*/
