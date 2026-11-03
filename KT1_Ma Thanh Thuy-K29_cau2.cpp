#include <stdio.h>

int main(){
	int diem;
	printf("Nhap diem: ");
	scanf("%d", &diem);
	
	if ( diem < 0 || diem > 100 ){
		printf("Diem khong hop le !!");
	}
	else if (diem <= 49){
		printf("Hoc sinh: Yeu");
	}
	else if (diem <= 69){
		printf("Hoc sinh: Trung Binh");
	}
	else if (diem <= 89){
		printf("Hoc sinh: Kha");
	}
	else if (diem <= 100){
		printf("Hoc sinh: Gioi");
	}
	return 0;
	
}
