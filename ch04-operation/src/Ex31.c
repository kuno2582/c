/*

//진수계산기
//사용자로 부터 입력받은 숫자의 진수를 결정받아
//10진수, 16진수, 8진수
//해당 숫자가 입력되면 10진수, 16진수, 8진수 모두 숫자를 출력해 주는 프로그램


//입력할 숫자의 진수형태를 선택하세요1(10진수), 2(8진수), 3(16진수) >2
//숫자값 입력 > 21
//10진수==> ?
//16진수==> ?
//8진수 ==> 21

#include <stdio.h>

int main(void){

	int type, data;

	printf("1(10진수), 2(8진수), 3(16진수) >");
	fflush(stdout);
	scanf("%d", &type);

	printf("숫자값 입력 >");
	fflush(stdout);

	switch(type){
	case 1:
		scanf("%d", &data);
		break;
	case 2:
		scanf("%o", &data);
		break;
	case 3:
		scanf("%x", &data);
		break;
	}

	printf("10진수==> %d\n", data);
	printf("8진수==> %o\n", data);
	printf("16진수==> %x\n", data);

	return 0;
}
*/
