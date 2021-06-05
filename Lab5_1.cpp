#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int i;
	int ngt=1;
	
	printf("Nhap n:");
	scanf("%d",&n);
	
	if(n<2)
	   printf("%d khong phai so nguyen to",n);
	else{
		for(i=2; i<=sqrt(n);i++){
			if(n%i==0){
				ngt=0;
			}
		}
		if(ngt==1)
		printf("%d la so nguyen to",n);
		else
		printf("%d khong phai so nguyen to",n);
	}
	 
}
