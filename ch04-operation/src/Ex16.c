/*

//for문 변형

#include <stdio.h>

int main(void){

	int i;
	int f = 1;

	//for문 변형 - 조건값이 없는 경우(무한 루프)
//	for(i=1; 1 ; i++){
	for(i=1;  ; i++){
		f =f * i;

		if(i>=10)
			break;
	}
	printf("1부터 10까지의 곱: %d\n", f);

	return 0;
}
*/
