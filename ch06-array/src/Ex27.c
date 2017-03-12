/*

//문자열안의 문자의 종류별 개수 계산하는 프로그램

//제한사항
//-배열크기 100
//-문자열을 입력받아(알파벳, 숫자, 특수문자, 띄어쓰기)
//-영문자 대문자 갯수,
//-영문자 소문자 갯수,
//-특수문자 갯수,
//-띄어쓰기 갯수,
//-숫자의 객수를 각각 출력해 주시기 바랍니다.


#include <stdio.h>

int main(void){

	char str[100];
	char ch;

	int cnt_UC=0; //대문자(Upper Case)
	int cnt_LC=0; //소문자(Lower Case)
	int cnt_Num=0; //숫자(Number)
	int cnt_SL=0; //특수문자(Special Letter)
	int cnt_WS=0; //띄어쓰기(White Space)
	int cnt_Total=0;

	int i;

	printf("문자열을 입력하세요(100자 이내) > ");
	fflush(stdout);
	scanf("%[^\n]s", str);

	i=0;
	do{
		ch = str[i];

		//띄어쓰기
		if(ch == ' '){
			cnt_WS++;
			printf("%c", ch);
		//특수문자
		}else if( (ch>='!' && ch<='/') ||
				  (ch>=':' && ch<='@') ||
				  (ch>='[' && ch<='`') ||
				  (ch>='{' && ch<='~') ){
			cnt_SL++;
			printf("%c", ch);
		//대문자
		}else if(ch>='A' && ch<='Z'){
			cnt_UC++;
			printf("%c", ch);
		//소문자
		}else if(ch>='a' && ch<='z'){
			cnt_LC++;
			printf("%c", ch);
		//숫자
		}else if(ch>='0' && ch<='9'){
			cnt_Num++;
			printf("%c", ch);
		}
		i++;
		cnt_Total++;


	}while(ch != '\0');

	printf("\n");
	printf("계산한 총 문자수: %d\n", cnt_Total);
	printf("대문자 %d개, 소문자 %d개, 특수문자 %d개, 띄어쓰기 %d개, 숫자 %d개\n"
			,cnt_UC, cnt_LC, cnt_SL, cnt_WS, cnt_Num );


	return 0;
}
*/
