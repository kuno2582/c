/*

//중첩 for문 연습
//scanf()함수를 통해 입력받은 숫자이하의 단을 내림차순으로 출력
//구구단

//3 * 9 = 27
//3 * 8 = 24
//.......
//2 * 9 = 18
//2 * 8 = 16
//.......
//2 * 1 = 2

#include <stdio.h>

int main(void){

	int i;
	int j=9;
	int dan;
	int result=0;

	printf("단을 출력할 수를 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &dan);

	for( ; i>0 ; i--){
	//for(dan ; dan>0 ; dan--){
	//for(i = dan ; i>0 ; i--){
		for( j=9; j>0 ;j-- ){
			result= i*j;
			printf("%d * %d = %d\n", i, j, result);
		}
		printf("------------\n");
	}


	return 0;
}
*/
