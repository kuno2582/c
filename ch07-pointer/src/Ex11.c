/*

//������ ������ ���� �迭 ��ҵ��� ���� ����

#include <stdio.h>

int main(void){

	int array[3]={10, 20, 30};
	int* p=NULL;
	int i=0;
	p=array;

	//�����͸� ���� �迭 ����� '��' ���
	for(i=0; i<3; i++){
		printf("%d %d %d\n", *(p+i), *&p[i], p[i]);
	}


	return 0;
}
*/
