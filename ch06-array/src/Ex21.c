/*


//3���� �迭
//- 2���� �迭�� ��ҷ� ������ �迭

//3���� �迭 ���� ����
//�ڷ��� �迭��[��][��][��]

#include <stdio.h>

int main(void){

	int i, j, k;

	int array[3][3][3]={
			{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
			{ 10, 11, 12, 13, 14, 15, 16, 17, 18},
			{ 19, 20, 21, 22, 23, 24, 25, 26, 27}
	};

	for(i=0; i<3 ;i++){ //��: 0��, 1��, 2��
		for(j=0; j<3; j++){ //��: 0��, 1��, 2��
			for(k=0; k<3 ;k++){ //��: 0��, 1��, 2��
				printf("%d ", array[i][j][k]);
			}
			printf("\n");

		}
		printf("--------\n");
	}



	return 0;
}
*/