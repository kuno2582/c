/*

//if~else 한계
//else 문 num=0, num=-1, num=-2 다양하게 표시하지 못하는 단점
//즉, 0보다 큰 경우 그밖의 경우밖에는 제어하지 못합니다.
// -> else문 안에 if~else문을 사용함으로 해결
// -> else if문으로 해결
#include <stdio.h>

int main(void){

		int num;
		printf("원하는  숫자 입력 > ");
		fflush(stdout);
		scanf("%d", &num);

		if(num>0)
			printf("0보다 큰 수 저장\n");
		else
			printf("0또는 0보다 작은 수 저장\n");


	return 0;
}
*/
