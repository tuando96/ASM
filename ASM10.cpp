#include <stdio.h>
#include <stdlib.h>

void nhapmang(int *p,int from,int to){
	for(int i=from;i<to;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",p+i);
	}
}
int timMax(int *p,int n){
	int max = *p;
	for(int i=0;i<n;i++){
		if(max < *(p+i)){
			max = *(p+i);
		}
	}
	return max;
}
void sapxep(int *p,int n){
	for(int i=0;i<n-1;i++){	
		for(int j=0;j<n-i-1;j++){
			if(*(p+j) > *(p+j+1)){
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;
			}
		}
	}
}

void inmang(int *p,int n){
	for(int i=0;i<n;i++){
		printf("%5d",*(p+i));
	}
}

int main(){
	int n,*p; 
	printf("Nhap kich thuoc ban dau cua mang:");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	nhapmang(p,0,n);
	int max = timMax(p,n);
	sapxep(p,n);

	printf("So lon nhat: %d \n",max);
	inmang(p,n);

	int m;
	printf("\nSo luong can nhap them:");
	scanf("%d",&m);
	p = (int *)realloc(p,(n+m)*sizeof(int));
	nhapmang(p,n,n+m);

	max = timMax(p,n+m);
	sapxep(p,n+m);

	printf("So lon nhat: %d \n",max);
	inmang(p,n+m);
	free(p);
}
