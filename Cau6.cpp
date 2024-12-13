#include<stdio.h>

void findIndex(int *arr , int size , int *number){
	int found = 0;
	int index = -1;
	for(int i = 0 ; i < size ; i++){
		if(*(arr+i) == *number){
			found = 1;
			index = i;
			break;
		}
	}
	if(found){
			printf("Gia tri can tim nam o vi tri %d",index);
		}else{
			printf("Khong tim thay gia tri can tim");
	}
}

int main(){
	int arr[] = {10,20,30,40,50};
	int size = sizeof(arr)/sizeof(arr[0]);
	int number;
	printf("Nhap vao gia tri can tim : ");
	scanf("%d",&number);
	findIndex(arr,size,&number);
	return 0;
}
