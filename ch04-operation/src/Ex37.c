/*

//" "
//    *
//   **
//  ***
// ****
//*****

//*****
// ****
//  ***
//   **
//    *


#include <stdio.h>

int main(void){

	int i, j, h;

	//    *  1 4 1
	//   **  2 3 2
	//  ***  3 2 3
	// ****  4 1 4
	//*****  5 0 5

	for(i=1; i<=5; i++){

		for(j=5-i; j>=1;j--){
			printf(" ");
		}

		for(h=0; h<i;h++){
			printf("*");
		}
		printf("\n");
	}


	//***** 5 0 5
	// **** 4 1 4
	//  *** 3 2 3
	//   ** 2 3 2
	//    * 1 4 1

	for(i=5; i>=0 ;i--){
		for(j=5-i; j>=1; j--){
			printf(" ");
		}
		for(h=1; h<=i; h++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
*/
