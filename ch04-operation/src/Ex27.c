/*

//switch~case��
//- ���ǹ��� ����� ���
//- �پ��� ����� ���� ����� �� �ֽ��ϴ�.
//- if~else���� �����ϰ� ǥ��
//- if~else���� ���� �������� �����ϴ�.
//- if~else���� ���� �ణ�� ������ �ֽ��ϴ�.

//switch~case�� ����
//switch(���Ұ�){
//case ��1:
//	������ ����;
//	break;
//case ��2:
//	������ ����;
//	break;
//case ��3:
//	������ ����;
//	break;
//}


//break��
//- switch������ ������ case�� �ش�Ǵ� ���๮���� ��� �����ϰ�
//  swithc���� �����ϴ� ����
//- break���� ������ �� ������ ������ ���õǰ� switch���� �����ϰ� �˴ϴ�.
//- ���ǹ� ����
//- �ݺ��� ����

#include <stdio.h>

int main(void){

	int num;

	printf("���ϴ� ���� �޴� ��ȣ�� �Է��ϼ��� > ");
	fflush(stdout);
	scanf("%d", &num);

	switch(num){
	case 1:
		printf("���� ������ �ѽ�\n");
		break;
	case 2:
		printf("���� ������ �߽�\n");
		break;
	case 3:
		printf("���� ������ ���\n");
		break;
	case 4:
		printf("���� ������ �н�\n");
		break;
	case 5:
		printf("���� ������ �Ͻ�\n");
		break;
	default:
		printf("���� �޴� ���� ����: 1~5�������� �Է��� �� �ֽ��ϴ�.\n");

	}

	return 0;
}
*/
