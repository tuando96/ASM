#include <stdio.h>

int main(){
	int s=0;
	int n;
	int i;
	
	printf("nhap so:");
	scanf("%d",&n);

	while(i>0 && i<=n){
		s += i;
		i++;
	}
	printf("s = %d",s);
	
}
