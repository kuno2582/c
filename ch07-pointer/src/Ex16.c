//
////�����͸� �̿��Ͽ� �� �� ��ȯ
//
////a�� �Է� > 1234
////b�� �Է� > 5678
////a�� Ȯ��: 1234
////b�� Ȯ��: 5678
////a�� �ٲﰪ: 5678
////b�� �ٲﰪ: 1234
//
//#include <stdio.h>
//
//int main(void){
//
//	int a, b, temp;
//	int *ap=NULL;
//	int *bp=NULL;
//
//	//a�� b�� �� �Է¹ޱ�
//	printf("a �� �Է� > ");
//	fflush(stdout);
//	scanf("%d", &a);
//
//	printf("b �� �Է� > ");
//	fflush(stdout);
//	scanf("%d", &b);
//
//	printf("a�� Ȯ��: %d\n", a);
//	printf("b�� Ȯ��: %d\n", b);
//
//	ap = &a;
//	bp = &b;
//
//	temp=*ap;
//
//	*ap= *bp;
//
//	*bp=temp;
//
//	printf("a�� �ٲﰪ: %d\n", a);
//	printf("b�� �ٲﰪ: %d\n", b);
//
//	return 0;
//}
