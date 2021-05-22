#include <stdio.h>

int main(){
	int n;
	int sum=0;
	
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("Cac uoc cua %d la %d\n",n,i);
			sum+=i;			
		}
	}
	printf("\nTong cac uoc cua %d la %d",n,sum);
}
