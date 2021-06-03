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
	int solecuoicung = 0;
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2!=0){
			solecuoicung = arr[i];
			break;
		}
	}
	if(solecuoicung == 0){
		printf("Khong co so le trong mang");
	}else{
		printf("So le cuoi cung: %d",solecuoicung);
	}
}
