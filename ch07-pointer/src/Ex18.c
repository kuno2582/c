/*

//문자 상수
//char c;
//c='c;
//c='1';
//c=1;

//문자 배열
//char ac[3]={ 'A', 'B', 'C'};


#include <stdio.h>

int main(void){

	char array[]={'A', 'B', 'C', 'D', 'E'};
	char* p=NULL;
	p=array;


	//문자와 아스키코드값 출력
	printf("%c %c %c %c %c\n"
			, *(p+0), *(p+1), *(p+2), *(p+3), *(p+4));
	printf("%d %d %d %d %d\n"
			, *(p+0), *(p+1), *(p+2), *(p+3), *(p+4));

	printf("%c %c %c %c %c\n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);

	return 0;
}
*/
