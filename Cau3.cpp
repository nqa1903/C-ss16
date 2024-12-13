#include<stdio.h>

int sum(int *ptr1 , int *ptr2){
	return *ptr1 + *ptr2;
}

int main(){
	int number1 = 19;
	int *ptr1 = &number1;
	int number2 = 3;
	int *ptr2 = &number2;
	printf("Tong 2 so %d + %d = %d",number1,number2,sum(ptr1,ptr2));
	return 0;
}
