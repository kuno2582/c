#include <stdio.h>
#include <string.h>	//strlen 함수를 사용하기 위한 헤더파일 호출

int main(void){

	char num[100];

	printf("숫자를 입력해주세요 > ");
	fflush(stdout);
	scanf("%s",num);	//%s를 이용하여 입력받는 숫자 하나하나마다 각 배열의 요소에 바로 입력

	int i,j;
	for(i=0;i<strlen(num);i++){		//입력받은 숫자의 개수(배열의길이)만큼 반복 <= 층수에 해당
		for(j=0;j<num[i]-48;j++){	//입력받은 숫자를 문자형태(아스키코드값)으로 받았으므로 -48하면 해당숫자로 전환
			printf("*");
		}
		printf("\n");				//한층을 끝내고 개행
	}

	return 0;
}
