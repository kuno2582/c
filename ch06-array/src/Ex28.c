/*

//��ҹ��� ��ȯ ���α׷�
//�Էµ� ������ �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�ϰ�
//�׿��� ���ڴ� �״�� ��µǰ� �ϴ� ���α׷�

#include <stdio.h>

int main(void){

	char strIn[50];
	char strOut[50];
	int i;
	int strLength;
	int diff = 'a' - 'A';

	printf("���ĺ� ���ڿ��� �Է��ϼ��� >");
	fflush(stdout);
//	scanf("%[^\n]s", strIn);
	gets(strIn);

	printf("�Է¹��� ���ڿ�: %s\n", strIn);

	strLength = strlen(strIn);

	for(i=0; i<strLength ;i++){
		if( 'A'<=strIn[i] && strIn[i] <='Z' ){
			strOut[i] = strIn[i] + diff;
		}else if( 'a' <= strIn[i] && strIn[i] <='z'  ){
			strOut[i] = strIn[i] - diff;
		}else
			strOut[i] = strIn[i];
	}
	strOut[i]='\0';

	printf("��ȯ �� ���ڿ�: %s\n", strOut);

	return 0;
}


*/
