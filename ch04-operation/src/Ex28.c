/*

//switch~caseȰ��
//TODO : �빮�� �ѱ��ڸ� �Է¹޾� �ش� ������ ����ϴ� ���α׷�
//(M)onday, (T)uesday, (W)ednesday, T(H)ursday, (F)riday
//������, 	ȭ����, 		������,		�����,		�ݿ���
//(S)aturday,	S(U)day
//�����,			�Ͽ���

//

#include <stdio.h>

int main(void){

	char ch;
	printf("�ѹ��ڸ� �Է�(M, T, W, H, F, S, U) >");
	fflush(stdout);
	scanf("%c", &ch);

	switch(ch){
	case 'M':
	case 'm':
		printf("������\n");
//		break;
	case 'T':
	case 't':
		printf("ȭ����\n");
//		break;

	case 'W':
	case 'w':
		printf("������\n");
//		break;
	case 'H':
		printf("�����\n");
//		break;
	case 'F':
		printf("�ݿ���\n");
		break;
	case 'S':
	case 's':
		printf("�����\n");
//		break;
	case 'U':
	case 'u':
		printf("�Ͽ���\n");
//		break;
	}

	return 0;
}
*/
