/*


//�ּҿ� ���� ȣ�� �ʿ伺
//- �迭���� �����͸� �Լ��� ������ �� ����
//- ����ð� ����, �޸� ���� ��ü ����

#include <stdio.h>
void func(int* p, int num);

int main(void){

	int array[]={10, 20, 30, 40, 50, 60, 70};

	func(array , sizeof(array)/sizeof(int));

	return 0;
}
//void func(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int num)
void func(int* p, int num){
	int i;

	for(i=0; i<num ;i++){
		printf("%d %d\n", p[i], *(p+i));
	}

}
*/
