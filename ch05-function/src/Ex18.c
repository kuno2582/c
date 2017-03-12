/*

//재귀함수의 활용

//팩토리얼(Factorial)
//- 1부터 어떤 양의 정수 n까지의 정수를 모두 곱하는 것
//- n!, 6!, 5!

//5!= 5*4*3*2*1		5*4!			재귀호출
//4!= 4*3*2*1			4*3!
//3!= 3*2*1			3*2!
//2!= 2*1				2*1!
//1!= 1				1

//n! = n*(n-1)!

#include <stdio.h>

int main(void){

	int f;
	int result;

	printf("정수 입력하세요 > ");
	fflush(stdout);
	scanf("%d", &f);

	result = factorial(f);
	printf("%d 팩토리얼은 %d입니다.\n", f, result);

	return 0;
}


int factorial(int n){
	if(n<=1)
		return 1;
	else
		return n * factorial(n-1);

}
*/
