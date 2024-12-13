#include<stdio.h>

int main(){
	int number = 19;
	int *numberPtr = &number;
	printf("Gia tri cua con tro la : %d \n",*numberPtr);
	printf("Dia chi cua con tro la : %d \n",numberPtr);
	return 0;
}
