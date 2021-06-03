#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){ 
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	int min_x = 0;
	for(int i=0;i<n;i++){
		if(min_x==0 && arr[i]>0){
			min_x = arr[i];
		}else if(arr[i]<min_x && arr[i]>0){
			min_x = arr[i];
		}
	}
	if(min_x== 0){
		printf("Mang Khong co so duong nao ca");
	}else{
		printf("So duong nho nhat: %d",min_x);
	}
}
