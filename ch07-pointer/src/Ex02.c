/*

//������(pointer)
//- �ּҸ� �����ϴ� ����
//- ������ ������ ������ '*'�� ���� �տ� �ٿ��� ����
//- ������ ������ ũ��� �ڷ���(int, double, char)�� ������� ������ 4byte
//- C����� ���� �� �ϳ��� ������(������ ����)
//- ���� ���ڿ� ���̸� ������ �� �迭���� �����ͻ��

//�������� ����
//-�޸� �ּҸ� �����ؼ� �پ��� �ڷ��� �������� ���ٰ� ����
//-�޸� �ּҸ� �����ؼ� �迭�� ���� ���ӵ� �����Ϳ� ���ٰ� ����
//-���� �Ҵ�� �޸� ������ ���ٰ� ����


//������ ������ ���� ����
//�ڷ��� ������=�ʱⰪ;
//�ڷ��� *�����ͺ�����=NULL; //Null, null
//int number=0;

//int *number=NULL;
//int* p1=NULL;
//char* p2=NULL;
//double* p3=NULL;

#include <stdio.h>

int main(void){

	char* cp=NULL;
	int* ip=NULL;

	printf("%d %x %x\n", &cp, cp, *&cp);
	printf("%d %x %x\n", &ip, ip, *&ip);

	printf("%d %d\n", sizeof(char*), sizeof(int*));
	printf("%d %d\n", sizeof(char), sizeof(int));

	printf("%d %d\n", sizeof(cp), sizeof(ip));


	return 0;
}
*/
