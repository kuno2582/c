
//입력받은 문자열을 거꾸로 출력하기
//포인터 활용

//예상 출력결과
//변환할 글자를 입력하세요(50자 미만) > I love C!
//변환된 글자: !C evol I

#include <stdio.h>
#include <string.h>

int main(void){

	char array[50];
	char *p=array;
	int i;

	printf("변환할 글자를 입력하세요(50자 미만) > ");
	fflush(stdout);
	scanf("%[^\n]s", p);



	printf("변환한 결과: ");
	for( i=strlen(p)-1 ; i>=0 ; i--) //sizeof(p) 주의
		printf("%c", *(p+i));


	return 0;
}
