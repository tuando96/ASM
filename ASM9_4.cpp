#include <stdio.h>

int timBcnn(int bcnn, int a, int b){
	bcnn = a*b;
	for(int i=a*b;i>=a && i>=b;i--){
		if(i%a==0 && i%b==0){
			bcnn = i;
		}
	}
	printf("BCNN: %d",bcnn);
}

int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
	int bcnn; 
	timBcnn(bcnn,a,b);
	
}
