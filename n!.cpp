#include <stdio.h>

int main(){
	int s=1;
	int n;
	int i;
	
	printf("nhap so:");
	scanf("%d",&n);

	while(i>0 && i<=n){
		s = s*i;
		i++;
	}
	printf(" %d! = %d ",n,s);
	
}
