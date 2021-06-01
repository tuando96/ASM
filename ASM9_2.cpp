#include <stdio.h>

int sole(int A[], int n){
	printf("Cac so le trong mang la:\n");
	for (int i=0; i<n; i++){
		if(A[i]%2!=0){
		printf("%d \t",A[i]);
      	}
	}
    
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
	
	sole(A, n);
		
}
