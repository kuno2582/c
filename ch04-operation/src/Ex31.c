/*

//��������
//����ڷ� ���� �Է¹��� ������ ������ �����޾�
//10����, 16����, 8����
//�ش� ���ڰ� �ԷµǸ� 10����, 16����, 8���� ��� ���ڸ� ����� �ִ� ���α׷�


//�Է��� ������ �������¸� �����ϼ���1(10����), 2(8����), 3(16����) >2
//���ڰ� �Է� > 21
//10����==> ?
//16����==> ?
//8���� ==> 21

#include <stdio.h>

int main(void){

	int type, data;

	printf("1(10����), 2(8����), 3(16����) >");
	fflush(stdout);
	scanf("%d", &type);

	printf("���ڰ� �Է� >");
	fflush(stdout);

	switch(type){
	case 1:
		scanf("%d", &data);
		break;
	case 2:
		scanf("%o", &data);
		break;
	case 3:
		scanf("%x", &data);
		break;
	}

	printf("10����==> %d\n", data);
	printf("8����==> %o\n", data);
	printf("16����==> %x\n", data);

	return 0;
}
*/
