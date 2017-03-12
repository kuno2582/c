/*

//매개변수를 통해 재귀함수 호출

//매개변수
//- 메소드 호출시 넘겨주는 데이터(변수)
//- 메소드 외부에서 메소드 내부로 데이터를 전달하는 매개체 역할
//- 매개변수 지역변수
//- 한 변수에 저장된 데이터를 또 다른 변수에 데이터만 복사하여 저장시켜줍니다.

//매개변수 전달 방법
//1) 값에 의한 전달(Call by Value)
//- 값을 복사해서 해당 함수에 사용
//- 기존의 변수에 들어 있는 값은 변하지 않습니다.

//2) 주소에 의한 전달(Call by Reference)
//- 값이 들어 있는 주소를 넘겨받습니다.
//- 연산 결과에 따라 기존의 값이 바뀔 수 있습니다.
//- 넘겨진 원본 그 변수에 직접 접근 참조

#include <stdio.h>

void recursiveCall(int n);

int main(void){

	int a=1;

	recursiveCall(a);

	printf("a: %d\n", a);
	return 0;
}

void recursiveCall(int n){

	if(n>5)
		return;

	printf("Recursive Call %d회 수행\n", n);
	recursiveCall(n+1);
}
*/
