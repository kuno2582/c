/*

//포인터(pointer)
//- 주소를 저장하는 변수
//- 포인터 변수의 선언은 '*'를 변수 앞에 붙여서 선언
//- 포인터 변수의 크기는 자료형(int, double, char)에 관계없이 무조건 4byte
//- C언어의 장점 중 하나가 포인터(포인터 변수)
//- 가변 문자열 길이를 저장할 때 배열보다 포인터사용

//포인터의 장점
//-메모리 주소를 참조해서 다양한 자료형 변수들의 접근과 조작
//-메모리 주소를 참조해서 배열과 같은 연속된 데이터에 접근과 조작
//-동적 할당된 메모리 영역에 접근과 조작


//포인터 변수의 선언 형식
//자료형 변수명=초기값;
//자료형 *포인터변수명=NULL; //Null, null
//int number=0;

//int *number=NULL;
//int* p1=NULL;
//char* p2=NULL;
//double* p3=NULL;

#include <stdio.h>

int main(void){

	char* cp=NULL;
	int* ip=NULL;

	printf("%d %x %x\n", &cp, cp, *&cp);
	printf("%d %x %x\n", &ip, ip, *&ip);

	printf("%d %d\n", sizeof(char*), sizeof(int*));
	printf("%d %d\n", sizeof(char), sizeof(int));

	printf("%d %d\n", sizeof(cp), sizeof(ip));


	return 0;
}
*/
