/*

//다차원 배열 선언시 주의사항
//-열의 길이는 반드시 설정

#include <stdio.h>

int main(void){

	int array1[4][3]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int array2[4][3]={1, 2, 3, 4, 5};
//	int array3[4][]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int array4[][3]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	printf("%d %d %d\n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%d %d %d\n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%d %d %d\n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%d %d %d\n", array1[3][0], array1[3][1], array1[3][2]);

	printf("%d %d %d\n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%d %d %d\n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%d %d %d\n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%d %d %d\n", array2[3][0], array2[3][1], array2[3][2]);

//	printf("%d %d %d\n", array3[0][0], array3[0][1], array3[0][2]);
//	printf("%d %d %d\n", array3[1][0], array3[1][1], array3[1][2]);
//	printf("%d %d %d\n", array3[2][0], array3[2][1], array3[2][2]);
//	printf("%d %d %d\n", array3[3][0], array3[3][1], array3[3][2]);

	printf("%d %d %d\n", array4[0][0], array4[0][1], array4[0][2]);
	printf("%d %d %d\n", array4[1][0], array4[1][1], array4[1][2]);
	printf("%d %d %d\n", array4[2][0], array4[2][1], array4[2][2]);
	printf("%d %d %d\n", array4[3][0], array4[3][1], array4[3][2]);

	return 0;
}
*/
