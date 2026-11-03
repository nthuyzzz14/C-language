#include <stdio.h>

void xuatmang(int *x, int *y){
	for (int i = 0; i < *y; i++){
		printf("%d ", *(x+i));
	}
}

int main(){
	int a[5];
	
	printf("Nhap mang: ");
	scanf("%d", &a);
	
	xuatmang(&a[5]);
	
	return 0;
}
