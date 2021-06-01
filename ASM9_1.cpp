#include <stdio.h>

int timx(int A[], int n, int x){
	for (int i=0; i<n; i++){
		if(A[i] == x){
		return true;
	    }
	}
	return false;
}

int main(){
	int n;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int A[n];
	for (int i=0; i<n; i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d", &A[i]);
	}
	int x;
	printf("Nhap x:");
	scanf("%d", &x);
	
	int kq = timx(A, n, x);
	if(kq){
		printf("%d co trong mang\n",x);
	}else{
		printf("%d khong co trong mang\n",x);
	}
}
