/*

//배열이름을 통한 값 참조

#include <stdio.h>

int main(void){

	int array[5]={10, 20, 30, 40, 50};

	//배열이름으로 array배열의 각 배열요소 주소를 출력
	printf("%x %x %x %x %x\n",
			array+0, array+1, array+2, array+3, array+4);
	printf("%x %x\n", array+0, array);

	printf("%d %d %d %d %d\n",
			*(array+0), *(array+1), *(array+2), *(array+3), *(array+4) );
	printf("%d %d", *(array+0), *(array));

}
*/
