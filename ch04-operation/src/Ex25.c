/*

//if~else ��ø ���ǹ�
//������ �Է¹޾�
//�ش� ������ ���� ������ ����ϴ� ���α׷�
//else�� �ȿ� if~else���� ��������� �ذ�

//if()
//	printf();
//else{
//	if()
//		printf();
//	else{
//	}
//}
//

//>=95 	A+
//>=90	A
//>=85	B+
//>=80	B
//>=75	C+
//>=70	C
//>=60	D
//60�̸�	F

#include <stdio.h>

int main(void){

	int num;

	printf("C ��� ������ �Է��ϼ��� > ");
	fflush(stdout);
	scanf("%d", &num);

	if(num>=95)
		printf("A+�Դϴ�.");
	else if(num>=90)
		printf("A�Դϴ�.");
	else if(num>=85)
		printf("B+�Դϴ�.");
	else if(num>=80)
		printf("B�Դϴ�.");
	else if(num>=75)
		printf("C+�Դϴ�.");
	else if(num>=70)
		printf("C�Դϴ�.");
	else if(num>=60)
		printf("D�Դϴ�.");
	else{
		printf("F�Դϴ�.");
	}


	return 0;
}
*/
