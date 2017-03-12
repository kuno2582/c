/*


//break;
//- break;를 만나면 그 이후의 구문은 무시되고 반복문 종료
//- break;를 만나면 그 이후의 구문은 무시되고 조건문 종료

//한문자씩 계속 입력받다가
//q자를 입력받으면 반복문 수행을 중료하는 프로그램

#include <stdio.h>

int main(void){

	char ch;

	printf("문자를 입력하세요(q를 입력하면 종료됩니다.)>");
	fflush(stdout);

	for( ; ; ){ //무한루프

		scanf("%c", &ch);

		if(ch== 'q')
			break;
	}
	printf("반복문 종료\n");

	return 0;
}
*/
