/*

//��ø while�� ������
//���ϴ� ���� ���� �Է¹޾Ƽ�
//�Է¹��� �� ������ ���� ��� ����ϵ�
//�Ųٷ� ����ϴ� ������ ���α׷�

//3 * 9 = 27
//3 * 8 = 24
//.......
//2 * 9 = 18
//2 * 8 = 16
//.......
//2 * 1 = 2


#include <stdio.h>

int main(void){

	int num=0 ;
	int j=9;
	int result=0;

	printf("���ϴ� �� �Է� > ");
	fflush(stdout);
	scanf("%d", &num);

	while(num > 0){ // 3, 2, 1

		while(j > 0){ // 9, 8, 7, 6, 5, 4, 3, 2, 1

			result=num*j;
			printf("%d * %d = %d\n", num, j, result);
			j--;
		}

		num--;
		j=9;
		printf("------------------\n");
	}

	return 0;
}
*/
