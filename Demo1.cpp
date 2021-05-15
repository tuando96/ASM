#include <stdio.h>

int main(){
	int a,b,c;
	
	printf ("nhap so a:",a);
	scanf ("%d",&a);
	
	printf ("nhap so b:",b);
	scanf ("%d",&b);
		
	printf ("nhap so c:",c);
	scanf ("%d",&c);
	
	
if(a<b){
			if(a<c){
			printf("So nho nhat: %d",a);
		}else{
			printf("So nho nhat: %d",c);
		}
	}else{
		if(b<c){
			printf("So nho nhat: %d",b);
		}else{
			printf("So nho nhat: %d",c);
		}
	}
		
}
