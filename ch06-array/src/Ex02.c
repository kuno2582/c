/*

//�迭 ���� ���
//1)�迭 ���� �� �ʱ�ȭ
//->2)�迭 ����� ���ÿ� �ʱ�ȭ
//- {}(�߰�ȣ)�� �̿��ؼ� �迭�� �����͸� ����
//- �����͸� �������� ���� �迭������ 0���� �ڵ����� �ʱ�ȭ�� �˴ϴ�.

#include <stdio.h>

int main(void){

	//�迭 ��� �ʱ�ȭ�� {}������ �����͸� ������ �ָ� �˴ϴ�.
	//{}������ ����Ű�� �����̽� �ٴ� �迭 ���� ������ ���� �ʽ��ϴ�.
	int array1[5]={90,
			80,           70,
			60, 50};
	int array2[5] = {90, 80, 70  };

	//�迭�� ũ�⸦ �������� ������,
	//�ʱ�ȭ�Ǵ� ����� ���� ���� �迭�� ũ�Ⱑ ������ �˴ϴ�.
	int array3[] = {99, 88, 77, 66, 55};

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2],
			array1[3], array1[4]);
	printf("%d %d %d %d %d\n", array2[0], array2[1], array2[2],
			array2[3], array2[4]);
	printf("%d %d %d %d %d\n", array3[0], array3[1], array3[2],
			array3[3], array3[4]);

	return 0;
}

*/