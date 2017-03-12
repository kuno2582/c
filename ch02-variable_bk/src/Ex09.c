/*

//정수형 자료형과 변수의 크기확인
//실수형 자료형과 변수의 크기확인

//자료형: 변수가 저장하는 데이터 형식

//sizeof()
//-  자료형의 크기를 구하는 메소드
//sizeof(자료형)
//sizeof(변수명)

#include <stdio.h>

int main(void){

	char num1=10;	//1byte
	short num2=20;	//2byte
	int num3=30;	//4byte
	long num4=40;	//4byte

	float num5=3.14; //4byte
	double num6=3.25; //8byte
	long double num7=3.36; //8byte

	printf("char형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(char), sizeof(num1));
	printf("short형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(short), sizeof(num2));
	printf("int형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(int), sizeof(num3));
	printf("long형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(long), sizeof(num4));

	printf("float형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(float), sizeof(num5));
	printf("double형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(double), sizeof(num6));
	printf("double형의 크기: %d바이트, 변수의 메모리 크기: %d바이트\n",
			sizeof(long double), sizeof(num7));


	return 0;
}
*/
