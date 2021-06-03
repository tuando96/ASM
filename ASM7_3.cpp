#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){ 
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	int dem=0,dem_max = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			dem++;
		}else{
			dem = 0;
		}
		if(dem>dem_max){
			dem_max = dem;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d",dem_max);

}
