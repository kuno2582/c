/*

//�Է��� �� ������ ���� ��� ���α׷�

//���̴� �ƽ�Ű�ڵ尪�� ���̸� �ǹ�
//���̴� �Լ��� �����ؼ� �ش� �Լ��� ȣ���� ������� ���̰� �Ǹ�
//�� ���� ����ָ� �˴ϴ�.
//���̰��� ����θ� ó���ϱ� �ٶ��ϴ�.

//ù��° ���ڸ� �Է��ϼ���>
//�ι�° ���ڸ� �Է��ϼ���>

//�Լ� ȣ��(����) -> �Լ� ������ ���ϰ�

//�Էµ� ���ڴ� a, A
//�� ������ ���̴� 32�Դϴ�.



#include <stdio.h>

int diff(char df1, char df2);

int main(void){

	char ch1, ch2;
	printf("ù��° ���ڸ� �Է��ϼ���>");
	fflush(stdout);
	scanf("%c", &ch1); //a(97)

	printf("�ι�° ���ڸ� �Է��ϼ���>");
	fflush(stdout);
//	fflush(stdin);
	scanf("%*c%c", &ch2); //A(65)

	printf("�Էµ� ���ڴ� %c, %c\n", ch1, ch2);
	printf("�� ������ ���̴� %d�Դϴ�.", diff(ch1, ch2));

	return 0;
}


int diff(char df1, char df2){
	//a(97) - A(65)
	//df1 - df2
	if(df1 > df2)
		return df1 - df2;
	else
		return df2 - df1;
	//A(65) - a(97)
	//df1 - df2
	//df2 - df1
}

*/
