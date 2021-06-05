#include <stdio.h>

int main(){
	int x, n, f1, f2, f3;
	f1 = 0;
	f2 = 1;
	f3 = 1;
	x = 3;
	printf("Nhap n =");
	scanf("%d",&n);
	while(x <= n){
		f1=f2;
		f2=f3;
		f3=f1+f2;
		x++;
	}
	printf("So fibonacci thu %d la %d", n, f3);
}
