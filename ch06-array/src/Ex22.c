/*

//�迭����� ���� ���ϱ�

//sizeof() �޼ҵ�
//-�ڷ����� ũ�⸦ ���ϴ� �Լ�
//-�ڷ����� �Ҵ�� �޸��� ũ�⸦ ���� �� �־����ϴ�.

//sizeof()Ȱ��
//sizeof(�ڷ���)		sizeof(int)		�ڷ����� �޸� ũ�� ��ȯ
//					int num1;
//sizeof(����)		sizeof(num1)	������ �޸� ũ�⸦ ��ȯ
//					char array[17]
//sizeof(�迭)		sizeof(array)	�迭�� �޸� ũ�⸦ ��ȯ


#include <stdio.h>

int main(void){

	int numbers[] = { 512, 32, 7, 5580, 3628800, 1004, 2016, 2020 };

	//�迭�� ��ü ����Ʈ �� ���
	printf("%d\n", sizeof(numbers));

	//�迭��� �ϳ��� ũ��
	printf("%d\n", sizeof(numbers[0]));

	//�迭 ����� ������
	printf("%d\n", sizeof(numbers)/sizeof(numbers[0]) );

	return 0;
}
*/
