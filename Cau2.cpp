#include<stdio.h>

void swapPtr(int *ptr1 , int *ptr2){
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(){
	int number1 = 19;
	int number2 = 3;
	swapPtr(&number1 , &number2);
	printf("Gia tri cua bien ptr1 sau khi doi la : %d \n",number1);
	printf("Gia tri cua bien ptr1 sau khi doi la : %d \n",number2);
	return 0;
}
