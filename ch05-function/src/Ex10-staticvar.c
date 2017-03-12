/*

//정적 변수(Static variable)
//- 자료형 앞에 static 키워드 붙여줍니다.(정적변수 고유 특징)
//- 프로그램이 종료되지 않는 한 메모리에서 소멸되지 않습니다. (전역변수 특징)
//- 초기값을 지정하지 않아도 자동으로 0으로 초기화됩니다. (전역변수 특징)
//- 프로그램이 시작되면 초기화는 딱 한 번만 수행합니다. (전역변수 특징)
//- {}내에서 만들어 질 수 있으며 중괄호가 있는 지역에서
//  전역변수의 기능을 수행합니다. (지역변수 특징)
//- static int num;
//- 정적변수의 메모리 생성시점은 중괄호 내에서 초기화될 때
//- 정적변수의 메모리 소멸시점은 프로그램이 종료될 때
//- 정적변수는 중괄호가 있는 지역에서 전역변수의 기능이 필요할 때 사용합니다.

#include <stdio.h>

void count(void);

int main(void){

	count();
	count();
	count();

	return 0;
}

void count(void){
	static int staticX=0;
	int localX =0;

	staticX = staticX+1;
	localX = localX+1;

	printf("staticX 값: %d, localX 값: %d\n", staticX, localX);
}
*/
