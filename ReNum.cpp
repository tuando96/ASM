#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int du;
	int ren;
	
	printf("Nhap so can nghich dao:");
	scanf("%d",&n);
	
	while(n>0){
		du = n % 10;
		ren = ren * 10 + du;
		n = n / 10;
	}
	
	printf("So nghich dao la: %d",ren);
}
