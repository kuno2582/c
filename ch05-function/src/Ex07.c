/*

//외부에서 지역변수 호출
//선언영역 밖에서 호출한 지역변수 total은 ERROR발생합니다.
//-> 영역을 다시 설정해서 for, if 사용할 수 있도록 해결

#include <stdio.h>

int main(void){

	int i=0;

	int total = 0;
	for(i=1; i<5 ; i++){
//		int total = 0;
		total = total + i;
	}

	if(total > 20){
		printf("total 값: %d\n", total);
	}

	return 0;
}
*/
