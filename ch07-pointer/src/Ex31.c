/*

//주소반환(return)
//필요성: 대량의 데이터를 반환할때 사용
//주의사항: 지역변수의 주소를 반환하게되면 경고
//경고 발생: static 변수

//값/주소반환
//return 값;
//return 주소;

#include <stdio.h>
int* input();

int main(void){

	int* p=NULL;

	p=input();
	printf("%d\n", *p);

	return 0;
}

int* input(){
	static int num;
	fflush(stdout);
	scanf("%d", &num);
	return &num;
}
*/
