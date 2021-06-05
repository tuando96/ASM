#include <stdio.h>

int main(){
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){ 
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	
	int kiemtra = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			kiemtra = 1;
			break;
		}
	}
	if(kiemtra>0){
		printf("Mang co phan tu gia tri %d",x);
	}else{
		printf("Khong tim thay");
	}
}

