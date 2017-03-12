/*

//if~else 중첩 조건문
//점수를 입력받아
//해당 점수에 대한 학점을 출력하는 프로그램
//else문 안에 if~else문을 사용함으로 해결

//if()
//	printf();
//else{
//	if()
//		printf();
//	else{
//	}
//}
//

//>=95 	A+
//>=90	A
//>=85	B+
//>=80	B
//>=75	C+
//>=70	C
//>=60	D
//60미만	F

#include <stdio.h>

int main(void){

	int num;

	printf("C 언어 점수를 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &num);

	if(num>=95)
		printf("A+입니다.");
	else if(num>=90)
		printf("A입니다.");
	else if(num>=85)
		printf("B+입니다.");
	else if(num>=80)
		printf("B입니다.");
	else if(num>=75)
		printf("C+입니다.");
	else if(num>=70)
		printf("C입니다.");
	else if(num>=60)
		printf("D입니다.");
	else{
		printf("F입니다.");
	}


	return 0;
}
*/
