/*

//중첩 while문 구구단
//원하는 단의 수를 입력받아서
//입력받은 단 이하의 단을 모두 출력하되
//거꾸로 출력하는 구구단 프로그램

//3 * 9 = 27
//3 * 8 = 24
//.......
//2 * 9 = 18
//2 * 8 = 16
//.......
//2 * 1 = 2


#include <stdio.h>

int main(void){

	int num=0 ;
	int j=9;
	int result=0;

	printf("원하는 단 입력 > ");
	fflush(stdout);
	scanf("%d", &num);

	while(num > 0){ // 3, 2, 1

		while(j > 0){ // 9, 8, 7, 6, 5, 4, 3, 2, 1

			result=num*j;
			printf("%d * %d = %d\n", num, j, result);
			j--;
		}

		num--;
		j=9;
		printf("------------------\n");
	}

	return 0;
}
*/
