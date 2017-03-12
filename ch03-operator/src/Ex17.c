/*

//입력받은 초를 시, 분, 초로 계산해서 출력하는 프로그램

//힌트
//분		초/60
//시간	분/60

//프로그램 검증
//입력데이터 : 13579
//---------------
//시간: 3시간
//분: 46분
//초 : 19초


#include <stdio.h>

int main(void){

	int time;

	int hour, minite, second;

	printf("시간을 표시할 초를 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &time);

	printf("입력된 초: %d \n", time);

	hour = time / (60 * 60);
	time = time % (60 * 60);

	minite = time/ 60;
	second = time % 60;

	printf("시간 계산 중....... \n");
	printf("시간: %02d 시간\n", hour);
	printf("분: %d 분\n", minite);
	printf("초: %d 초\n", second);




	return 0;
}
*/
