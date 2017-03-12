/*

//입력한 두 문자의 차이 계산 프로그램

//차이는 아스키코드값의 차이를 의미
//차이는 함수로 선언해서 해당 함수를 호출한 결과값이 차이가 되며
//이 값을 출력주면 됩니다.
//차이값은 양수로만 처리하기 바랍니다.

//첫번째 문자를 입력하세요>
//두번째 문자를 입력하세요>

//함수 호출(내부) -> 함수 수행후 리턴값

//입력된 문자는 a, A
//두 문자의 차이는 32입니다.



#include <stdio.h>

int diff(char df1, char df2);

int main(void){

	char ch1, ch2;
	printf("첫번째 문자를 입력하세요>");
	fflush(stdout);
	scanf("%c", &ch1); //a(97)

	printf("두번째 문자를 입력하세요>");
	fflush(stdout);
//	fflush(stdin);
	scanf("%*c%c", &ch2); //A(65)

	printf("입력된 문자는 %c, %c\n", ch1, ch2);
	printf("두 문자의 차이는 %d입니다.", diff(ch1, ch2));

	return 0;
}


int diff(char df1, char df2){
	//a(97) - A(65)
	//df1 - df2
	if(df1 > df2)
		return df1 - df2;
	else
		return df2 - df1;
	//A(65) - a(97)
	//df1 - df2
	//df2 - df1
}

*/
