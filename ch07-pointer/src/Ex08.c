/*

//1���� �迭 '��'�� ��Ÿ���� ǥ��
//array[i] == *(array+i) == *&array[i]

#include <stdio.h>

int main(void){

	int array[3]={10, 20, 30};

	//*�����ڸ� �̿��ؼ�
	printf("%d %d %d\n", *array, *(array+0), *&array[0] ); //�迭�� 0�� ��ҿ� ����� ��
	printf("%d %d \n", *(array+1), *&array[1] ); //�迭�� 1�� ��ҿ� ����� ��
	printf("%d %d \n", *(array+2), *&array[2] ); //�迭�� 2�� ��ҿ� ����� ��


	return 0;
}
*/
