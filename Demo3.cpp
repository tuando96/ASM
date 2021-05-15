#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, p, x, s;
	
	printf("Nhap vao 3 canh cua tam giac:\n");
	
	printf("Nhap a:");
	scanf("%f",&a);
	printf("Nhap b:");
	scanf("%f",&b);
	printf("Nhap c:");
	scanf("%f",&c);
	
	if(a<(b+c) && b<(a+c) && c<(a+b)){
		printf("\nDay la 3 canh cua tam giac\n");
		
		p = a+b+c;
		printf("\nChu vi cua tam giac la: %f",p);
		
		x = p/2;
		s = sqrt(x*(x-a)*(x-b)*(x-c));
		printf("\nDien tich cua tam giac la: %f",s);
	}else{
		printf("\nDay khong phai la 3 canh cua tam giac");
	}
}
