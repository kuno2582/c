/*


//�Լ��� ���� ���� - ���O �Է�O
//�Լ��� ����/���� ��� 1(�Լ� ���� -> �Լ� ȣ��)

#include <stdio.h>

//�Լ� ���� - �Է�O ��� O
//�׻� main()�Լ� ���� ����
int max(int x, int y){ // x=i, y=j

	if( x > y)
		return x;
	else
		return y;
}

int main(void){

	int i, j; 	int k;
	printf("���� �ΰ��� �Է��ϼ��� > "); fflush(stdout);
	scanf("%d %d", &i, &j);

	//�Լ� ȣ��
	k = max(i, j);
	//printf("%d�� %d�� ū���� %d�Դϴ�.", i, j, k);

	printf("%d�� %d�� ū���� %d�Դϴ�.", i, j, max(i, j));

	return 0;
}

*/
