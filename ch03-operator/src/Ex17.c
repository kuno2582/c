/*

//�Է¹��� �ʸ� ��, ��, �ʷ� ����ؼ� ����ϴ� ���α׷�

//��Ʈ
//��		��/60
//�ð�	��/60

//���α׷� ����
//�Էµ����� : 13579
//---------------
//�ð�: 3�ð�
//��: 46��
//�� : 19��


#include <stdio.h>

int main(void){

	int time;

	int hour, minite, second;

	printf("�ð��� ǥ���� �ʸ� �Է��ϼ��� > ");
	fflush(stdout);
	scanf("%d", &time);

	printf("�Էµ� ��: %d \n", time);

	hour = time / (60 * 60);
	time = time % (60 * 60);

	minite = time/ 60;
	second = time % 60;

	printf("�ð� ��� ��....... \n");
	printf("�ð�: %02d �ð�\n", hour);
	printf("��: %d ��\n", minite);
	printf("��: %d ��\n", second);




	return 0;
}
*/
