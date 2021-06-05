#include <stdio.h>

int main(){
	int n, x;
	printf("Nhap n: ");
	scanf("%d",&n);
	int s1 = 1;
	int s2 = 1;
	if (n == 0){
		printf("So vua nhap khong co tiem can duoi trong day fibonacci");
	}else{
		x = 2;
		while(x + s2 < n){
			s1 = s2;
			s2 = x;
			x = s1 + s2;
		}
		printf("So tiem can duoi %d trong day fibonacci la: %d", n, x);
	}
}
