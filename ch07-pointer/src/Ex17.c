/*


//���� ���
//-���� ����ǥ('')���� ���Ե� �ϳ��� ����
//-Ű����� ǥ���� �� �ִ� ������, ����, Ư������
//-���� �� ��ü

//���� �迭
//- ���� ����� �����ϴ� �迭
//- �迭�� ����� ���ڴ� ���� ����


#include <stdio.h>

int main(void){

	char array[]={'A', 'B', 'C', 'D', 'E'};

	printf("���� ���: %c %c %c %c %c\n"
			, 'A', 'B', 'C', 'D', 'E');

	printf("���� �迭�� ���� �� ��: %c %c %c %c %c\n"
			, array[0], array[1], array[2], array[3], array[4]);

	array[0]='J';
	array[1]='O';
	array[2]='Y';
	array[3]='M';
	array[4]='A';

	printf("���� �迭�� ���� �� ��: %c %c %c %c %c\n"
			, array[0], array[1], array[2], array[3], array[4]);

	printf("���� �迭 arrayũ��: %d\n", sizeof(array));

	return 0;
}
*/
