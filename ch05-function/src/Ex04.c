/*



//�Լ��� ������ 2(�Լ� ���� -> �Լ� ���� -> �Լ� ȣ��)

#include <stdio.h>

//�Լ� ����
int imax(int x, int y);

int main(void){

	int i, j;
	int k;

	printf("���� �ΰ��� �Է��ϼ��� > ");
	fflush(stdout);
	scanf("%d %d", &i, &j);

	k = imax(i, j);
	printf("%d�� %d�� ū���� %d", i, j, k);

	return 0;
}

int imax(int x, int y){
	if(x > y)
		return x;
	else
		return y;
}




*/
