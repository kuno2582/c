#include <stdio.h>

int main(void){

	int array[10] = {7,0,9,8,1,4,6,3,5,2};

	int i,j;
	int a;			//�ӽ÷� ���� ����
	int* imsi;		//�ӽ÷� ���� ������ ����Ű�� �����ͺ���
	imsi = &a;		//�ӽ÷� ���� ������ �����ͺ����� �ּҿ���

	printf("������ �迭 ��� : ");
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	printf("\n");

	/*for(i=0;i<9;i++){		//�迭�� ù��°���ں���
		for(j=i+1;j<10;j++){	//�׿��� ������ ���ڵ����
			if(array[i]>array[j]){	//��� ���Ͽ� ���� ��ũ�� ��ȯ
				*imsi = array[i];	//�ӽ÷� ���� ����(a)�� ����Ű�� �����ͺ���(imsi)�� �̿�
				array[i] = array[j];
				array[j] = *imsi;
			}
		}
	}*/


	for(i=0;i<9;i++){			//���� for���� ǥ���� �ٸ��� �Ȱ���
		for(j=i+1;j<10;j++){
			if(*(array+i)>*(array+j)){
				*imsi = *(array+i);
				*(array+i) = *(array+j);
				*(array+j) = *imsi;
			}
		}
	}


	printf("������ �迭 ��� : ");
		for(i=0;i<10;i++){
			printf("%d ",array[i]);
		}

	return 0;
}
