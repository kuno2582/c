/*

//���迬����
//���踦 ���Ͽ� ��(True)�� ����(False)���� ����� ���� ������

//���� ������ ����� 1(��), 0(����)�� ��ȯ
// a > b	a�� b���� Ŭ���� ��
// a < b 	a�� b���� �������� ��
// a >= b	a�� b���� ũ�ų� �������� ��
// a <= b  	a�� b���� �۰ų� �������� ��
// a == b	a�� b�� �������� ��
// a != b	a�� b�� ���� �������� ��

#include <stdio.h>

int main(void){

	int num1=2, num2=7;
	int result1, result2, result3, result4;

//	result1 = num1 > num2;
//	result2 = num1 <= num2;
//	result3 = num1 == num2;
//	result4 = num1 != num2;

			//num1=2, num2=7;
	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1�� ����� ��: %d\n", result1);
	printf("result2�� ����� ��: %d\n", result2);
	printf("result3�� ����� ��: %d\n", result3);
	printf("result4�� ����� ��: %d\n", result4);

	return 0;
}
*/