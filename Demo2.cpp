#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	float delta;
	
	printf("Nhap a:");
	scanf("%f",&a);
	printf("Nhap b:");
	scanf("%f",&b);
	printf("Nhap c:");
	scanf("%f",&c);
	
	delta = b*b-4*a*c;
	
	if(a==0){
		float x = -c/b;
		printf("x = %f", x);
		return 0;
	}
	
	if(delta<0){
		printf("Phuong trinh vo nghiem");
	}
	
	if(delta==0){
		float x = -b/(2*a);
		printf("x = %.2f\n",x);
	}
	
	if(delta>0){
		float x1 = (-b + sqrt(delta)) / (2*a);
		float x2 = (-b - sqrt(delta)) / (2*a);
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}
	
	return 0;
}
