/*



//레지스터 변수(Register Variable)
//-CPU내부의 레지스터에 변수를 할당하는 변수
//-처리속도가 빠름

//레지스터(Register)
//-CPU를 구성하는 부품 중 하나
//-CPU가 데이터를 처리하기 위해 사용하는 임시 작업공간


//레지스터 변수 특징
//- 자주 쓰는 변수들을 register변수로 선언한 후 사용합니다.
//- 코드 최적화시 레지스터 변수가 자동으로 지역변수로 할당될 수 있습니다.
//- 왜냐하면 레지스터 변수의 수가 제한되어 있기 때문에 컴파일러가
//  레지스터의 수와 선언된 지역변수의 수, 가중치를 따져서 레지스터 변수로
//  선언되었지만 지역변수로 할당하는 경우도 있습니다.
//- 고차원 컴파일러의 경우 레지스터로 선언해 주지 않아도
//  자동으로 레지스터 변수로 선언해줍니다.

#include <stdio.h>
#include <time.h>

#define MAX 1000000

int main(void){

	register int i; //레지스터 변수
//	int i; //지역변수
	clock_t starttime, endtime, result;

	starttime = clock();
	for(i=0;i<=MAX ;i++){
		printf("%d\n", i);
	}
	endtime=clock();

	result=endtime - starttime;

	//printf("지역변수 속도: %lf초\n", (double)result/1000);
	printf("레지스터변수 속도: %lf초\n", (double)result/1000);

	return 0;
}


//지역변수 속도
//999999
//1000000
//지역변수 속도: 1.794000초

*/
