#include <stdio.h>
#include <string.h>	//strlen �Լ��� ����ϱ� ���� ������� ȣ��

int main(void){

	char num[100];

	printf("���ڸ� �Է����ּ��� > ");
	fflush(stdout);
	scanf("%s",num);	//%s�� �̿��Ͽ� �Է¹޴� ���� �ϳ��ϳ����� �� �迭�� ��ҿ� �ٷ� �Է�

	int i,j;
	for(i=0;i<strlen(num);i++){		//�Է¹��� ������ ����(�迭�Ǳ���)��ŭ �ݺ� <= ������ �ش�
		for(j=0;j<num[i]-48;j++){	//�Է¹��� ���ڸ� ��������(�ƽ�Ű�ڵ尪)���� �޾����Ƿ� -48�ϸ� �ش���ڷ� ��ȯ
			printf("*");
		}
		printf("\n");				//������ ������ ����
	}

	return 0;
}
