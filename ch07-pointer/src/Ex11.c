/*

//포인터 변수를 통해 배열 요소들의 값에 접근

#include <stdio.h>

int main(void){

	int array[3]={10, 20, 30};
	int* p=NULL;
	int i=0;
	p=array;

	//포인터를 통해 배열 요소의 '값' 출력
	for(i=0; i<3; i++){
		printf("%d %d %d\n", *(p+i), *&p[i], p[i]);
	}


	return 0;
}
*/
