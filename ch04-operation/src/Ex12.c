/*

//��ø for
//TODO 1:������ ����ϱ�
//TODO 2: ���� ���� ���
//3��
//3 * 1 = 3
//3 * 2 = 6

//while(){
//	while(){
//
//	}
//}
//
//for(;;){
//	for(;;){
//
//	}
//}


#include <stdio.h>

int main(void){

	int i, j;
	int result=0;


	//1)
//	printf("%d ��\n", i);
	for( i=2 ; i<10 ; i++){//�ܺιݺ�

		//2)
		printf("%d ��\n", i);
		for( j=1 ; j<10 ; j++){//���ιݺ�

			//3)
			//printf("%d ��\n", i);
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);

		}
		//X
		//printf("%d ��\n", i);
	}

	return 0;
}
*/
