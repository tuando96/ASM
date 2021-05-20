#include <stdio.h>
#include <math.h>

int main(){
	float s=0;
	int n,i;
	
	printf("nhap so:");
	scanf("%d",&n);
	
	while(i>0 && i<=n){
		s += (float)1/i;
		i++;
	}
	printf("s = %f",s);
}


