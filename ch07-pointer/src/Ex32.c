/*


#include <stdio.h>

int* func();
int main(void){

	int* p=NULL;
	p=func();

	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d\n"
			, *(p+0), *(p+1), *(p+2), *(p+3), *(p+4) );

	return 0;
}

int* func(){
	static int array[]={10, 20, 30, 40, 50};
	return array;
}
*/
