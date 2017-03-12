/*


//특정 숫자 범위에서 지정 배수의 합계 구하는 프로그램

//제한 사항
//원하는 세수를 입력 받기
//-시작 숫자 >> 1
//-끝 숫자 >> 10
//-합계를 구할 배수 >> 2

#include <stdio.h>

int main(void){

	int numStart, numEnd;
	int numMuliple;
	int i;
	int sum =0;

	printf("범위의 시작 숫자 입력 > ");
	fflush(stdout);
	scanf("%d", &numStart);

	printf("범위의 끝 숫자 입력 > ");
	fflush(stdout);
	scanf("%d", &numEnd);

	printf("합계를 구할 배수 입력 > ");
	fflush(stdout);
	scanf("%d", &numMuliple);

//	for(i=numStart; i<=numEnd; i++){ }
	i = numStart;
	while(i<=numEnd){
		if(i %numMuliple==0){
			sum = sum + i;
			printf("%d \n", sum);
		}
		i++;
	}

	printf("%d ~ %d범위에서 %d배수의 합계는 %d\n",
			numStart, numEnd, numMuliple, sum);

	return 0;
}
*/
