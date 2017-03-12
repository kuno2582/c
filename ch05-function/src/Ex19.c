/*

//구구단 출력 프로그램
//출력할 단을 입력
//단을 함수 호출
//구구단을 출력하는 부분을 함수로 완성하시기 바랍니다.

//출력할 단을 입력하세요 > 7
//7 * 1 = 7
//7 * 2 = 14
//...


#include <stdio.h>
void gugudan(int dan);

int main(void){

	int dan;
	//입력받은 부분
	printf("출력하고 싶은 단을 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &dan);
	//함수 호출
	gugudan(dan);
	return 0;
}

void gugudan(int dan){
	//구구단 출력 -> 함수 종료 -> 반환값 X

	int i;

	for(i=1; i<=9 ; i++){
		printf("%d * %d = %d\n", dan, i, dan*i);
	}

	return ;
}
*/
