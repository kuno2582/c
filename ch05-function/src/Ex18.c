/*

//����Լ��� Ȱ��

//���丮��(Factorial)
//- 1���� � ���� ���� n������ ������ ��� ���ϴ� ��
//- n!, 6!, 5!

//5!= 5*4*3*2*1		5*4!			���ȣ��
//4!= 4*3*2*1			4*3!
//3!= 3*2*1			3*2!
//2!= 2*1				2*1!
//1!= 1				1

//n! = n*(n-1)!

#include <stdio.h>

int main(void){

	int f;
	int result;

	printf("���� �Է��ϼ��� > ");
	fflush(stdout);
	scanf("%d", &f);

	result = factorial(f);
	printf("%d ���丮���� %d�Դϴ�.\n", f, result);

	return 0;
}


int factorial(int n){
	if(n<=1)
		return 1;
	else
		return n * factorial(n-1);

}
*/
