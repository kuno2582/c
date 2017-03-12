/*

//if~else 한계 -> 해결한 코드
//else문 안에 if~else문을 사용함으로 해결

#include <stdio.h>

int main(void){

		int num;
		printf("원하는  숫자 입력 > ");
		fflush(stdout);
		scanf("%d", &num);

		if(num>0)
			printf("0보다 큰 수 저장\n");
		else{ //else문 안에 if~else문을 사용함으로 해결
			//printf("0또는 0보다 작은 수 저장\n");
			if(num==0)
				printf("0이 저장됨\n");
			else{
				printf("0보다 작은 수 저장\n");
			}

		}

	return 0;
}
*/
