/*

//동전교환기
//사용자로 부터 입력된 금액(액수)만큼
//500원, 100원, 50원, 10원, 1원짜리 동전으로 교환해 주는 프로그램

//제한사항
//고액의 동전을 먼저 바꿔주서 동전의 총 개수를 최소화하도록 하겠습니다.

//힌트
// /연산,  %연산

//TODO : 변수 선언
//TODO : 금액 입력
//TODO : 500원 동전 개수 (몫), 500으로 나눈 후 나머지 금액 (나머지)
//TODO : 100원 동전 개수
//TODO : 50원 동전 개수
//TODO : 10원 동전 개수

#include <stdio.h>

int main(void){

	//최초 입력 금액 및 남은 돈 저장 변수
	int coin;

	//각 동전 개수 변수
	int c500, c100, c50, c10;

	printf("교환할 돈을 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &coin);

	printf("동전 교환중....\n");

	c500 = coin/500; //500원짜리 동전 개수
	coin = coin%500; //500으로 나눈 후 나머지 금액

	c100 = coin/100; //100원짜리 동전 개수
	coin = coin%100; //100으로 나눈 후 나머지 금액

	c50 = coin / 50; //50원짜리 동전 개수
	coin = coin % 50; //50으로 나눈 후 나머지 금액

	c10 = coin / 10; // 10원짜리 동전 개수
	coin = coin % 10; // 10으로 나눈 후 나머지 금액 -> 1원 짜리 동전

	printf("오백원짜리 동전: %d개 \n", c500);
	printf("백원짜리 동전: %d개 \n", c100);
	printf("오십원짜리 동전: %d \n", c50);
	printf("십원짜리 동전: %d \n", c10);
	printf("일원짜리 동전: %d \n", coin);

	return 0;
}
*/
