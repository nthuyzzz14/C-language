#include <stdio.h>
#include <math.h>

int main(){
	int diem;
	printf("Nhap du lieu diem:\n");
	printf("Diem:");
	scanf("%d", &diem);
	
	switch(diem){
		case 0: case 1:
		case 2:
			printf("Xep loai hoc sinh:\nKem");
			break;
		case 3: case 4:
			        printf("Xep loai hoc sinh:\nYeu");
			        break;
		case 5:
			printf("Xep loai hoc sinh:\nTrung Binh");
			break;
		case 6: case 7:
			        printf("Xep loai hoc sinh:\nKha");
			        break;
		case 8: case 9: case 10:
			                printf("Xep loai hoc sinh:\nGioi");
			                break;
	}
	return 0;
}
