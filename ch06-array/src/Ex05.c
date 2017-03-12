/*

//배열의 이름은 배열의 시작 주소


#include <stdio.h>

int main(void){

	int array[5] ={10, 20, 30, 40, 50};

	printf("%x %x %x %x %x\n",
			array, array+1, array+2, array +3, array+4);

	printf("%x %x %x %x %x\n",
			&array[0], &array[1], &array[2], &array[3], &array[4]);


	return 0;
}
*/
