/*


//Ư�� ���� �������� ���� ����� �հ� ���ϴ� ���α׷�

//���� ����
//���ϴ� ������ �Է� �ޱ�
//-���� ���� >> 1
//-�� ���� >> 10
//-�հ踦 ���� ��� >> 2

#include <stdio.h>

int main(void){

	int numStart, numEnd;
	int numMuliple;
	int i;
	int sum =0;

	printf("������ ���� ���� �Է� > ");
	fflush(stdout);
	scanf("%d", &numStart);

	printf("������ �� ���� �Է� > ");
	fflush(stdout);
	scanf("%d", &numEnd);

	printf("�հ踦 ���� ��� �Է� > ");
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

	printf("%d ~ %d�������� %d����� �հ�� %d\n",
			numStart, numEnd, numMuliple, sum);

	return 0;
}
*/
