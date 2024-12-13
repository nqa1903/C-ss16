#include<stdio.h>

void updateArray(int *arr , int size ,int *updateValue , int *updateIndex){
	for(int i = 0 ; i < size ; i++){
		if(*updateIndex >= 0 && *updateIndex <= size){
			*(arr + *updateIndex) = *updateValue;
		}else{
			printf("Vi tri cap nhat khong hop le");
		}
	}
	printf("Mang sau khi cap nhat la : ");
	for(int i = 0 ; i < size ; i++){
		printf("%d ",*(arr+i));
	}
}

int main(){
	int arr[] = {10,20,30,40,50};
	int updateValue;
	printf("Nhap vao gia tri muon cap nhat : ");
	scanf("%d",&updateValue);
	int updateIndex;
	printf("Nhap vao vi tri muon cap nhat : ");
	scanf("%d",&updateIndex);
	int size = sizeof(arr)/sizeof(arr[0]);
	updateArray(arr , size , &updateValue , &updateIndex);
	return 0;
}
