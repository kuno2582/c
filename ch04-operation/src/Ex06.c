/*

//��ø while�� Ȱ������ ������ ���

//2 * 1 = 2
//2 * 2 = 4
//2 * 3 = 6
//.....
//3 * 1 = 3
//3 * 2 = 6
//.....


#include <stdio.h>

int main(void){

	//�ʱⰪ
	int i=2;
	int j=1;
	int result=0;


	while(i<10){ //9 ��

		while(j<10){
			result = i*j;
			printf("%d * %d = %d\n", i, j, result);
			j++;
		}

		i++;
		j=1;
		printf("--------------\n");
	}

	return 0;
}
*/
