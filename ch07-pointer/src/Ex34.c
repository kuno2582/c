
//�Է¹��� ���ڿ��� �Ųٷ� ����ϱ�
//������ Ȱ��

//���� ��°��
//��ȯ�� ���ڸ� �Է��ϼ���(50�� �̸�) > I love C!
//��ȯ�� ����: !C evol I

#include <stdio.h>
#include <string.h>

int main(void){

	char array[50];
	char *p=array;
	int i;

	printf("��ȯ�� ���ڸ� �Է��ϼ���(50�� �̸�) > ");
	fflush(stdout);
	scanf("%[^\n]s", p);



	printf("��ȯ�� ���: ");
	for( i=strlen(p)-1 ; i>=0 ; i--) //sizeof(p) ����
		printf("%c", *(p+i));


	return 0;
}
