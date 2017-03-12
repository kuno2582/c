/*



//함수의 적용방법 2(함수 정의 -> 함수 선언 -> 함수 호출)

#include <stdio.h>

//함수 선언
int imax(int x, int y);

int main(void){

	int i, j;
	int k;

	printf("숫자 두개를 입력하세요 > ");
	fflush(stdout);
	scanf("%d %d", &i, &j);

	k = imax(i, j);
	printf("%d와 %d중 큰수는 %d", i, j, k);

	return 0;
}

int imax(int x, int y){
	if(x > y)
		return x;
	else
		return y;
}




*/
