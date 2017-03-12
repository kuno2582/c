/*

//배열 선언 방법
//1)배열 선언 후 초기화
//->2)배열 선언과 동시에 초기화
//- {}(중괄호)를 이용해서 배열에 데이터를 저장
//- 데이터를 저장하지 않은 배열공간은 0으로 자동으로 초기화가 됩니다.

#include <stdio.h>

int main(void){

	//배열 요소 초기화시 {}사이의 데이터를 나열해 주면 됩니다.
	//{}사이의 엔터키와 스페이스 바는 배열 선언에 영향을 주지 않습니다.
	int array1[5]={90,
			80,           70,
			60, 50};
	int array2[5] = {90, 80, 70  };

	//배열의 크기를 설정하지 않으면,
	//초기화되는 요수의 수에 따라 배열의 크기가 결정이 됩니다.
	int array3[] = {99, 88, 77, 66, 55};

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2],
			array1[3], array1[4]);
	printf("%d %d %d %d %d\n", array2[0], array2[1], array2[2],
			array2[3], array2[4]);
	printf("%d %d %d %d %d\n", array3[0], array3[1], array3[2],
			array3[3], array3[4]);

	return 0;
}

*/
