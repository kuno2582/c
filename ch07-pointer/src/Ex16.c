//
////포인터를 이용하여 두 값 교환
//
////a값 입력 > 1234
////b값 입력 > 5678
////a값 확인: 1234
////b값 확인: 5678
////a의 바뀐값: 5678
////b의 바뀐값: 1234
//
//#include <stdio.h>
//
//int main(void){
//
//	int a, b, temp;
//	int *ap=NULL;
//	int *bp=NULL;
//
//	//a와 b의 값 입력받기
//	printf("a 값 입력 > ");
//	fflush(stdout);
//	scanf("%d", &a);
//
//	printf("b 값 입력 > ");
//	fflush(stdout);
//	scanf("%d", &b);
//
//	printf("a값 확인: %d\n", a);
//	printf("b값 확인: %d\n", b);
//
//	ap = &a;
//	bp = &b;
//
//	temp=*ap;
//
//	*ap= *bp;
//
//	*bp=temp;
//
//	printf("a의 바뀐값: %d\n", a);
//	printf("b의 바뀐값: %d\n", b);
//
//	return 0;
//}
