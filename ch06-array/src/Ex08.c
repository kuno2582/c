/*

//�迭�̸��� ���� �� ����

#include <stdio.h>

int main(void){

	int array[5]={10, 20, 30, 40, 50};

	//�迭�̸����� array�迭�� �� �迭��� �ּҸ� ���
	printf("%x %x %x %x %x\n",
			array+0, array+1, array+2, array+3, array+4);
	printf("%x %x\n", array+0, array);

	printf("%d %d %d %d %d\n",
			*(array+0), *(array+1), *(array+2), *(array+3), *(array+4) );
	printf("%d %d", *(array+0), *(array));

}
*/
