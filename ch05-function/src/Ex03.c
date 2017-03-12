/*


//함수의 정의 형태 - 출력O 입력O
//함수의 선언/적용 방법 1(함수 정의 -> 함수 호출)

#include <stdio.h>

//함수 정의 - 입력O 출력 O
//항상 main()함수 위에 정의
int max(int x, int y){ // x=i, y=j

	if( x > y)
		return x;
	else
		return y;
}

int main(void){

	int i, j; 	int k;
	printf("숫자 두개를 입력하세요 > "); fflush(stdout);
	scanf("%d %d", &i, &j);

	//함수 호출
	k = max(i, j);
	//printf("%d와 %d중 큰수는 %d입니다.", i, j, k);

	printf("%d와 %d중 큰수는 %d입니다.", i, j, max(i, j));

	return 0;
}

*/
