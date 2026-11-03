#include <stdio.h>

int main(){
	int n;
	
	do {
		scanf("%d", &n);
		if (n <= 0){
			printf("Gia tri khong hop le, yeu cau nhap lai !\n");
		}
	} while (n <= 0);
		printf("%d la so duong !", n);
	return 0;
}
