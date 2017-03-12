/*

//키보드로 입력받은 데이터(정수)를 2차원 배열(2X2)요소에 저장하고
//2차원 배열에 저장된 이 데이트를 그대로 출력해 주시기 바랍니다.
//2차원 배열 중첩반복문을 사용해서 입력/출력 구현

//출력결과 예상 (행단위로 출력)
//1  2
//3  4

//TODO 1: 2차원 배열 선언
//TODO 2: 2차원 배열 출력
//TODO 3: 2차원 배열에 데이터 입력
//TODO 4: 2차원 배열의 데이터 출력

#include <stdio.h>

int main(void){
	//TODO 1: 2차원 배열 선언
	int array[2][2]={ 1,2,3,4 };
	int i, j;

	//TODO 3: 2차원 배열에 데이터 입력
	for(i=0; i<2 ;i++){
		for(j=0; j<2;j++){
			printf("원하는 정수입력 >");
			fflush(stdout);
			scanf("%d", &array[i][j]);
		}
	}


	//TODO 2: 2차원 배열 출력
	//TODO 4: 2차원 배열의 데이터 출력
	for(i=0; i<2 ;i++){
		for(j=0; j<2;j++){
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/
