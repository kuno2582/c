/*

//switch~case문
//- 조건문을 만드는 방법
//- 다양한 경우의 수를 사용할 수 있습니다.
//- if~else문을 간결하게 표현
//- if~else문에 비해 가독성이 높습니다.
//- if~else문에 비해 약간의 제약이 있습니다.

//switch~case문 형식
//switch(비교할값){
//case 값1:
//	실행할 문장;
//	break;
//case 값2:
//	실행할 문자;
//	break;
//case 값3:
//	실행할 문자;
//	break;
//}


//break문
//- switch문에서 정의한 case에 해당되는 수행문장을 모두 실행하고
//  swithc문을 종료하는 역할
//- break문을 만나면 그 이후의 내용은 무시되고 switch문을 종료하게 됩니다.
//- 조건문 종료
//- 반복문 종료

#include <stdio.h>

int main(void){

	int num;

	printf("원하는 저녁 메뉴 번호를 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &num);

	switch(num){
	case 1:
		printf("오늘 저녁은 한식\n");
		break;
	case 2:
		printf("오늘 저녁은 중식\n");
		break;
	case 3:
		printf("오늘 저녁은 양식\n");
		break;
	case 4:
		printf("오늘 저녁은 분식\n");
		break;
	case 5:
		printf("오늘 저녁은 일식\n");
		break;
	default:
		printf("저녁 메뉴 선택 오류: 1~5번까지만 입력할 수 있습니다.\n");

	}

	return 0;
}
*/
