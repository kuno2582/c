/*


//������ ������ �̿��ؼ� ���������� �����Ϳ� ���������� �����͸� ���� ����

#include <stdio.h>

int main(void){

	int num=10;
	int* ip=NULL;
	ip=&num;
//	ip=100;

	int sum=0;
	sum = *ip + num;
	//�����ͺ����� ����� ��, num�� ��, sum
	printf("%d, %d, %d\n", *ip, num, sum); // 10 10 20

	return 0;
}
*/
