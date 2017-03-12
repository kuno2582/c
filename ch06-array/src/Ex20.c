/*

//2차원 배열의 값

#include <stdio.h>

int main(void){

	int array[2][2] ={ {10, 20},
					{30, 40} };

	printf("%d %d\n", *&array[0][0], *&array[0][1]);
	printf("%d %d\n", *&array[1][0], *&array[1][1]);

	printf("%d %d\n", *array[0]+0, *array[0]+1);
	printf("%d %d\n", *array[1]+0, *array[1]+1);

	printf("%d %d\n", *(array[0]+0), *(array[0]+1));
	printf("%d %d\n", *(array[1]+0), *(array[1]+1));

	printf("%d %d\n", **(array+0)+0, **(array+0)+1);
	printf("%d %d\n", **(array+1)+0, **(array+1)+1);

	printf("%d %d\n", *(*(array+0)+0), *(*(array+0)+1));
	printf("%d %d\n", *(*(array+1)+0), *(*(array+1)+1));



	return 0;
}
*/
