/*

//���� ���
//char c;
//c='c;
//c='1';
//c=1;

//���� �迭
//char ac[3]={ 'A', 'B', 'C'};


#include <stdio.h>

int main(void){

	char array[]={'A', 'B', 'C', 'D', 'E'};
	char* p=NULL;
	p=array;


	//���ڿ� �ƽ�Ű�ڵ尪 ���
	printf("%c %c %c %c %c\n"
			, *(p+0), *(p+1), *(p+2), *(p+3), *(p+4));
	printf("%d %d %d %d %d\n"
			, *(p+0), *(p+1), *(p+2), *(p+3), *(p+4));

	printf("%c %c %c %c %c\n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);

	return 0;
}
*/
