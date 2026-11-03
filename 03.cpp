#include <stdio.h>

int main (){
	int diem;
	printf("Nhap du lieu:\n");
	printf("Diem= ");
	scanf("%d", &diem);
	
    if (diem < 0 || diem > 10){
    	printf("Diem khong hop le !!");
	}
	else if (diem <= 3){
		printf("Hoc sinh xep loai:\nYeu");
	}
	else if (diem <= 5){
		printf("Hoc sinh xep loai:\nTrung Binh");
	}
	else if (diem <= 7){
		printf("Hoc sinh xep loai:\nKha");
	}
	else if (diem <= 10){
		printf("Hoc sinh xep loai:\nGioi");
	}
	
	return 0;	
}
