/*

//�� ������

//&&������
//- AND ������(����)
//- ~�̰�(�׸���)
//- �Ѵ� ���̾�� ��
//�ǿ�����	������	�ǿ�����	���
//0			&&		0		0
//0			&&		1		0
//1			&&		0		0
//1			&&		1		1
//(num1 > num2) && (num1 > num2)

//||������
//- OR ������(����)
//- ~�̰ų�(�Ǵ�)
//- ���� �ϳ��� ���̾ ��
//�ǿ�����	������	�ǿ�����	���
//0			||		0		0
//0			||		1		1
//1			||		0		1
//1			||		1		1

//!������
//- NOT������(�� ����)
//- ~�ƴϴ�(����)
//- ���̸� ����, �����̸� ��
//������	�ǿ�����	���
//!		0		1
//!		1		0


#include <stdio.h>

int main(void){

	int num1=2, num2=5, num3=100;
	int result1, result2, result3, result4;

	result1 = (num1>0) && (num2<10);
	printf("result1�� ����� ��: %d \n", result1);

	result2 = (num1>0) && (num2>10);
	printf("result2�� ����� ��: %d \n", result2);

	result3 = (num2<=2) || (num3<8);
	printf("result3�� ����� ��: %d \n", result3);

	result4 = !num3;
	printf("result�� ����� ��: %d \n", result4);


	return 0;
}
*/
