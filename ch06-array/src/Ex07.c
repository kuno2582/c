/*

//*������
//-�޸��� �ּ� �տ� ���
//-*�� �޸� ������ ����� ���� �����ϴ� �������Դϴ�.
//-*&�� ���(*&a=a), &*


#include <stdio.h>

int main(void){

	int array[5] = {10, 20, 30, 40, 50};

	//�迭 �̸������� �ּ� ���
	printf("%x, %x, %x, %x, %x\n",
			array+0, array+1, array+2, array+3, array+4);

	//�� �迭�� ��Ҹ� �ּ� ���
	printf("%x, %x, %x, %x, %x\n",
	&array[0], &array[1], &array[2], &array[3], &array[4]);

	//�� �迭 ����� �� ���
	printf("%d, %d, %d, %d, %d\n",
	array[0], array[1], array[2], array[3], array[4]);

	//*�����ڷ� �� �迭����� �� ���
	printf("%d, %d, %d, %d, %d\n",
	*&array[0], *&array[1], *&*&*&*&*&*&array[2], *&array[3], *&array[4]);

	//�迭�̸��� ���� *�����ڸ� ����Ͽ� ���� ���
	printf("%d, %d, %d, %d, %d\n",
	*(array+0), *(array+1), *(array+2), *(array+3), *(array+4));
	printf("%d, %d, %d, %d, %d\n",
	*(array), *(array+1), *(array+2), *(array+3), *(array+4));

	return 0;
}
*/
