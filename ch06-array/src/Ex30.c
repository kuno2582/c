/*

//���� �ٲٱ�
//ã�� ���ڸ� �ٲ� ���ڷ� �����ϴ� ���α׷�

//���ѻ���
//���ĺ� ���ڿ��� �Է¹ް�
//��ȯ�� ����(ã�� ����, �ٲ���)�� ��ȯ�� ����(�ٲ� ����) �ΰ��� �Է¹޾�
//���� �߰�Ǵ� ��ȯ�� ���ڸ� �ٲ� ���ڷ� ��ü�� �ִ� ���α׷�

//��°�� ����
//�������ڿ� �Է��ϼ���> XXAXXXXXXX
//��ȯ�� ����(ã�� ����, �ٲ���)�Է� > A
//��ȯ�� ����(�ٲ� ����) �Է� > B
//���� �ٲٱ� ���: XXBXXXXXXX

#include <stdio.h>
#include <string.h>

int main(void){

	char str[50];
	char ch1;
	char ch2;

	int i;

	printf("���� ���ڿ��� �Է��ϼ��� >");
	fflush(stdout);
	scanf("%[^\n]s", str);

	printf("��ȯ�� ����(ã�� ����, �ٲ� ����) �Է� > ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch1);

	printf("��ȯ�� ����(�ٲ� ����) �Է� > ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch2);

	for(i=0; i<strlen(str) ;i++){
		if(str[i]==ch1)
			str[i]=ch2;
	}

	printf("���� �ٲٱ� ���: %s\n", str);

	return 0;
}
*/
