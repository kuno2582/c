/*

//1���� �迭�� �ּҿ� ��

//&������(�ּҿ�����)
//-&�� �ּҸ� �����ϴ� ������
//-�޸� ������ �ּ� ǥ��
//-%p(16���� ������): �ּ� ���

#include <stdio.h>

int main(void){

	char array1[5]={'A', 'B', 'C', 'D', 'E'};
	int array2[5]={1, 2, 3, 4, 5};

	//%x�� ���(�� �迭 ����� �ּ�)
	printf("array1: %x %x %x %x %x\n",
			&array1[0], &array1[1], &array1[2], &array1[3], &array1[4]);
	printf("array2: %x %x %x %x %x\n",
			&array2[0], &array2[1], &array2[2], &array2[3], &array2[4]);

	//%d�� ���
	printf("array1: %d %d %d %d %d\n)",
			&array1[0], &array1[1], &array1[2], &array1[3], &array1[4]);
	printf("array2: %d %d %d %d %d\n",
			&array2[0], &array2[1], &array2[2], &array2[3], &array2[4]);

	//%p
	//-�������� �ּ� ���� ������(���Ĺ���)
	//-������ ���ƴ� ������ �ּҸ� ǥ��
	//-�ּҰ� ���
	printf("array1: %p %p %p %p %p\n",
			&array1[0], &array1[1], &array1[2], &array1[3], &array1[4]);
	printf("array2: %p %p %p %p %p\n",
			&array2[0], &array2[1], &array2[2], &array2[3], &array2[4]);

	return 0;
}
*/
