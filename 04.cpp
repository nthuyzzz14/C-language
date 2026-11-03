#include <stdio.h>

int main(){
	int thang;
	printf("Kiem tra thang co so ngay chan va so ngay le\n");
	printf("Nhap du lieu: ");
	scanf("%d", &thang);
	
	if( thang < 1 && thang > 12){
		printf("Khong co thang nay !!");
	}
	else {
		switch(thang){
			case 1: case 3: case 5: case 7:
			case 8: case 10: case 12:
				printf("Thang co 31 ngay !!\n");
				break;
			case 4: case 6: case 9: case 11:
				printf("Thang co 30 ngay !!\n");
				break;
			case 2:
				printf("Thang co 28 hoac 29 ngay\n");
				break;
		}
	}
	return 0;
}
