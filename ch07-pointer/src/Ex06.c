/*


//포인터 변수를 이용해서 간접접근한 데이터와 직접접근한 데이터를 덧셈 연산

#include <stdio.h>

int main(void){

	int num=10;
	int* ip=NULL;
	ip=&num;
//	ip=100;

	int sum=0;
	sum = *ip + num;
	//포인터변수에 저장된 값, num의 값, sum
	printf("%d, %d, %d\n", *ip, num, sum); // 10 10 20

	return 0;
}
*/
