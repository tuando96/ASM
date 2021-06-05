#include <stdio.h>

int main(){
	int n, x;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n<1){
			printf("Nhap n nguyen duong\n");
		}
	} while(n < 1);
	int a[n];
	for (int i=0; i<n; i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d", &a[i]);
		if (i>=1){
			int k = i-1;
			int tmp = a[i];
			while ((k>=0) && (tmp<a[k])){
				a[k+1] = a[k];
				k--;
			}
			a[k+1] = tmp;
		}
		printf("Day vua nhap la: \n");
		for(int j=0; j<=i; j++){
			printf("%5d", a[j]);
		}
		printf("\n");
	}
}
