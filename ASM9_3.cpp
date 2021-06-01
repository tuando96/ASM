#include <stdio.h>

int timUcln(int ucln, int a, int b){
	ucln = 1;
	for(int i=2; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0){
			ucln = i;
		}
	}
	printf("UCLN: %d",ucln);
}

int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
	int ucln; 
	timUcln(ucln,a,b);
	
}
