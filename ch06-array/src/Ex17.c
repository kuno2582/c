/*

//2���� �迭�� �پ��� �ּ� ǥ��
//1)2���� �迭 �̸��� 2���� �迭�� ���� �ּ�
//->2)2���� �迭�� ���� ��Ҵ� ���� ��ǥ�ϴ� �ּ�
//3)2���� �迭���� array[i] == *(array+i) �ּ�

#include <stdio.h>

int main(void){

	int array[2][2]={ {10, 20}, {30, 40} };

	printf("%x %x %x\n", array[0], &array[0][0], &array[0][1]);
	printf("%x %x %x\n", array[1], &array[1][0], &array[1][1]);

	return 0;
}
*/
