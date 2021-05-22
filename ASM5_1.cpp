#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap n:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		i%2==0;
		printf("Cac so chan be hon %d la %d\n",n,i);	
    }
}
