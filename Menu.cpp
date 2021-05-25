#include <stdio.h>
#include <stdlib.h>

int main(){
	int choose = 0;
	int thanhtoan = 0;
	do{
	system("cls");
	printf("Menu:\n");
	printf("\t1. Chon mon an\n");
	printf("\t2. Goi do uong\n");
	printf("\t3. Thanh toan\n");
	printf("\t4. Thoat chuong trinh\n");
	printf("----------------------------------\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&choose);
	
	switch(choose){
		case 1:
			system("cls");
			printf("Xin moi chon mon:\n");
			printf("\t1. Com ga 40k\n");
			printf("\t2. Pho 30k\n");
			printf("\t3. Bun 30k\n");
			printf("\t4. Quay lai\n");
			printf("----------------------------------\n");
			printf("Lua chon cua ban: ");
			
			int choose1;
			scanf("%d",&choose1);
			switch(choose1){
				case 1:
					printf("Quy khach da chon com ga 40k xin cam on!\n");
					choose1 = 40;
					system("pause");
					break;
				case 2:
					printf("Quy khach da chon Pho 30k xin cam on!\n");
					choose1 = 30;
					system("pause");
					break;
				case 3:
					printf("Quy khach da chon Bun 30k xin cam on!\n");
					choose1 = 30;
					system("pause");
					break;
				case 4:
					break;
			}
			break;
			
		case 2:
			system("cls");
			printf("Xin moi chon do uong:\n");
			printf("\t1. Coca 10k\n");
			printf("\t2. Ca phe 15k\n");
			printf("\t3. Nuoc ep 20k\n");
			printf("\t4. Quay lai\n");
			printf("----------------------------------\n");
			printf("Lua chon cua ban: ");
			
			int choose2;
			scanf("%d",&choose2);
			switch(choose2){
				case 1:
					printf("Quy khach da chon Coca 10k xin cam on!\n");
					choose2 = 10;
					system("pause");
					break;
				case 2:
					printf("Quy khach da chon Ca phe 15k xin cam on!\n");
					choose2 = 15;
					system("pause");
					break;
				case 3:
					printf("Quy khach da chon Nuoc ep 20k xin cam on!\n");
					choose2 = 20;
					system("pause");
					break;
				case 4:
					break;
			}
			break;
		case 3:
			system("cls");
			thanhtoan=choose1+choose2;
			printf("So tien phai can phai thanh toan la: %dk\n",thanhtoan);
			printf("Cam on quy khach!\n");
			system("pause");
			break;
		case 4:
			return false;
		default:
			system("cls");
			printf("Xin hay nhap lai:\n");
			system("pause");
	  }
	  
	} while (true);

	return 0;
}
