/*

//���ڿ����� ������ ������ ���� ����ϴ� ���α׷�

//���ѻ���
//-�迭ũ�� 100
//-���ڿ��� �Է¹޾�(���ĺ�, ����, Ư������, ����)
//-������ �빮�� ����,
//-������ �ҹ��� ����,
//-Ư������ ����,
//-���� ����,
//-������ ������ ���� ����� �ֽñ� �ٶ��ϴ�.


#include <stdio.h>

int main(void){

	char str[100];
	char ch;

	int cnt_UC=0; //�빮��(Upper Case)
	int cnt_LC=0; //�ҹ���(Lower Case)
	int cnt_Num=0; //����(Number)
	int cnt_SL=0; //Ư������(Special Letter)
	int cnt_WS=0; //����(White Space)
	int cnt_Total=0;

	int i;

	printf("���ڿ��� �Է��ϼ���(100�� �̳�) > ");
	fflush(stdout);
	scanf("%[^\n]s", str);

	i=0;
	do{
		ch = str[i];

		//����
		if(ch == ' '){
			cnt_WS++;
			printf("%c", ch);
		//Ư������
		}else if( (ch>='!' && ch<='/') ||
				  (ch>=':' && ch<='@') ||
				  (ch>='[' && ch<='`') ||
				  (ch>='{' && ch<='~') ){
			cnt_SL++;
			printf("%c", ch);
		//�빮��
		}else if(ch>='A' && ch<='Z'){
			cnt_UC++;
			printf("%c", ch);
		//�ҹ���
		}else if(ch>='a' && ch<='z'){
			cnt_LC++;
			printf("%c", ch);
		//����
		}else if(ch>='0' && ch<='9'){
			cnt_Num++;
			printf("%c", ch);
		}
		i++;
		cnt_Total++;


	}while(ch != '\0');

	printf("\n");
	printf("����� �� ���ڼ�: %d\n", cnt_Total);
	printf("�빮�� %d��, �ҹ��� %d��, Ư������ %d��, ���� %d��, ���� %d��\n"
			,cnt_UC, cnt_LC, cnt_SL, cnt_WS, cnt_Num );


	return 0;
}
*/
