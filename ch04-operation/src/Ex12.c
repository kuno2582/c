/*

//중첩 for
//TODO 1:구구단 출력하기
//TODO 2: 단의 제목 출력
//3단
//3 * 1 = 3
//3 * 2 = 6

//while(){
//	while(){
//
//	}
//}
//
//for(;;){
//	for(;;){
//
//	}
//}


#include <stdio.h>

int main(void){

	int i, j;
	int result=0;


	//1)
//	printf("%d 단\n", i);
	for( i=2 ; i<10 ; i++){//외부반복

		//2)
		printf("%d 단\n", i);
		for( j=1 ; j<10 ; j++){//내부반복

			//3)
			//printf("%d 단\n", i);
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);

		}
		//X
		//printf("%d 단\n", i);
	}

	return 0;
}
*/
