/*
//배열(Array)
//-같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료구조
//-같은 자료형을 가진 변수들이 여러 개 필요할 때 사용
//-배열은 변수 여러 개를 나란히 나열하여 하나로 묶어 놓은 것입니다.
//-여러개 변수를 공통의 변수이름(배열이름)을 사용하며
// 저장된 여러 개의 변수는 배열명에 첨자만 증가시켜서 구분합니다.
//-배열의 시작은 0부터 시작합니다.
//-for문과 같은 반복문과 함께 주로 사용
//-배열 선언한 후 초기화를 해주지 않으면 쓰레기값 출력

#include <stdio.h>

int main(void){

	int array[3] = {85, 99, 76};
	int total=0;

	total = array[0] + array[1] + array[2]; //배열요소의 값 모두 합산
	printf("array[0]:%d, array[1]:%d, array[2]:%d\n"
			,array[0], array[1] ,array[2]); //배열 요소의 값 출력
	printf("총합: %d\n", total);
	printf("평균: %.2lf\n", (double)total/3);

	return 0;
}
*/
