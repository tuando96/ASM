#include <stdio.h>
#include <math.h>

int main(){
	int von = 4000;
	int nam = 4;
	int nhan = von;
	for (int a = 0; a < nam; a++){
		int lai = nhan * 8 / 100;
		nhan += lai;
		printf("Lai: %d, Tien hien tai: %d, sau %d nam\n", lai, nhan, a+1);
	}
	printf("Von ban dau: %d, Lai duoc %d, trong %d nam", von, nhan, nam);
	return 0;
}
