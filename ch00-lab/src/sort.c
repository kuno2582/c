#include <stdio.h>

int main(void){

	int array[10] = {7,0,9,8,1,4,6,3,5,2};

	int i,j;
	int a;			//임시로 담을 변수
	int* imsi;		//임시로 담을 변수를 가리키는 포인터변수
	imsi = &a;		//임시로 담을 변수와 포인터변수의 주소연결

	printf("정렬전 배열 요소 : ");
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	printf("\n");

	/*for(i=0;i<9;i++){		//배열의 첫번째인자부터
		for(j=i+1;j<10;j++){	//그외의 나머지 인자들과의
			if(array[i]>array[j]){	//대소 비교하여 값이 더크면 교환
				*imsi = array[i];	//임시로 담을 변수(a)를 가리키는 포인터변수(imsi)를 이용
				array[i] = array[j];
				array[j] = *imsi;
			}
		}
	}*/


	for(i=0;i<9;i++){			//위의 for문과 표현만 다를뿐 똑같음
		for(j=i+1;j<10;j++){
			if(*(array+i)>*(array+j)){
				*imsi = *(array+i);
				*(array+i) = *(array+j);
				*(array+j) = *imsi;
			}
		}
	}


	printf("정렬후 배열 요소 : ");
		for(i=0;i<10;i++){
			printf("%d ",array[i]);
		}

	return 0;
}
