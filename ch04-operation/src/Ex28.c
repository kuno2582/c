/*

//switch~case활용
//TODO : 대문자 한글자를 입력받아 해당 요일을 출력하는 프로그램
//(M)onday, (T)uesday, (W)ednesday, T(H)ursday, (F)riday
//월요일, 	화요일, 		수요일,		목요일,		금요일
//(S)aturday,	S(U)day
//토요일,			일요일

//

#include <stdio.h>

int main(void){

	char ch;
	printf("한문자를 입력(M, T, W, H, F, S, U) >");
	fflush(stdout);
	scanf("%c", &ch);

	switch(ch){
	case 'M':
	case 'm':
		printf("월요일\n");
//		break;
	case 'T':
	case 't':
		printf("화요일\n");
//		break;

	case 'W':
	case 'w':
		printf("수요일\n");
//		break;
	case 'H':
		printf("목요일\n");
//		break;
	case 'F':
		printf("금요일\n");
		break;
	case 'S':
	case 's':
		printf("토요일\n");
//		break;
	case 'U':
	case 'u':
		printf("일요일\n");
//		break;
	}

	return 0;
}
*/
